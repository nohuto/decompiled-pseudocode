void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  bool v2; // zf
  __int16 v3; // bp
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int16 v15; // si
  __int64 v16; // r11
  unsigned int v17; // r9d
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  unsigned __int8 v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = bTracingEnabled == 0;
    *((_BYTE *)this + 448) = 1;
    if ( !v2 )
    {
      VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v3 = VIDMM_SEGMENT::DriverId(this);
      if ( (byte_1C00769C1 & 0x10) != 0 )
      {
        Percentagex100(*((_QWORD *)this + 55), *((_QWORD *)this + 54));
        Percentagex100((unsigned int)dword_1C0076578, (unsigned int)dword_1C007657C);
        v25 = v4;
        LOWORD(v24) = v3;
        LOWORD(v23) = *((_WORD *)this + 190);
        McTemplateK0phhhxxqqx_EtwWriteTransfer(v6, v5, v7, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
    }
    v8 = *((_QWORD *)this + 54);
    v9 = *((_QWORD *)this + 55);
    if ( v9 < v8 * (unsigned __int64)(unsigned int)dword_1C0076578 / (unsigned int)dword_1C007657C )
    {
      v10 = VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v12 = dword_1C0076584;
      v13 = v8 - v9;
      v14 = (unsigned __int64)(unsigned int)dword_1C0076580 * v13 % (unsigned int)dword_1C0076584;
      if ( v10 < (unsigned __int64)(unsigned int)dword_1C0076580 * v13 / (unsigned int)dword_1C0076584 )
      {
        v27 = 0LL;
        v26 = 0;
        if ( bTracingEnabled )
        {
          v15 = VIDMM_SEGMENT::DriverId(this);
          if ( (byte_1C00769C1 & 0x10) != 0 )
          {
            Percentagex100(v16, v13);
            Percentagex100(v17, v12);
            LODWORD(v25) = v18;
            LOWORD(v24) = v15;
            LOWORD(v23) = *((_WORD *)this + 190);
            McTemplateK0phhhqqx_EtwWriteTransfer(v20, v19, v21, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
          }
        }
        v22 = VIDMM_GLOBAL::PrepareMoveResources(
                *((VIDMM_GLOBAL **)this + 1),
                v14,
                v11,
                *((_DWORD *)this + 4),
                v23,
                v24,
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 53),
                v25,
                &v26,
                (__int64)&v27);
        if ( v22 < 0 )
          WdLogSingleEntry3(3LL, v22, v27, v26);
      }
    }
  }
}
