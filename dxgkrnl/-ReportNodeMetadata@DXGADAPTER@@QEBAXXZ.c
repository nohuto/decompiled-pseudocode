void __fastcall DXGADAPTER::ReportNodeMetadata(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // r14d
  __int64 v11; // r15
  _DWORD *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]

  v3 = 0;
  if ( *((int *)this + 638) < 0x2000 )
  {
    v5 = 1;
  }
  else
  {
    v5 = *((_DWORD *)this + 72);
    if ( !v5 )
      return;
  }
  v6 = 0LL;
  do
  {
    v7 = *((_QWORD *)this + 351);
    v8 = *(_QWORD *)(v6 + v7 + 32);
    if ( v8 )
    {
      v9 = *(unsigned __int16 *)(v6 + v7);
      v10 = 0;
      if ( *(_WORD *)(v6 + v7) )
      {
        v11 = 0LL;
        do
        {
          v12 = (_DWORD *)(v11 + v8);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v14) = *v12;
            LODWORD(v13) = v10 | (v3 << 16);
            McTemplateK0pqqz_EtwWriteTransfer((unsigned int)v13, (__int64)v12, a3, this, v13, v14, v12 + 1);
            v8 = *(_QWORD *)(v6 + v7 + 32);
          }
          ++v10;
          v11 += 74LL;
        }
        while ( v10 < v9 );
      }
    }
    ++v3;
    v6 += 344LL;
  }
  while ( v3 < v5 );
}
