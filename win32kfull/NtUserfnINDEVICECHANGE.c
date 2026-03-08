/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C00DF4E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  unsigned int *v6; // r14
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int128 v27; // [rsp+60h] [rbp-48h] BYREF
  __int64 v28; // [rsp+70h] [rbp-38h]

  v6 = a4;
  v10 = (unsigned __int16)a3 & 0x8000;
  v11 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  PtiCurrentShared(a1);
  if ( a3 <= 0x800A
    && ((_DWORD)a3 == 0x8000
     || (_DWORD)a3 == 32772
     || (_DWORD)a3 == 32775
     || (_DWORD)a3 == 32776
     || (unsigned int)(a3 - 32777) < 2)
    && !v6 )
  {
LABEL_73:
    v12 = 0LL;
    UserSetLastError(87);
    return v12;
  }
  if ( !v10 )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_71;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v14 = *v6;
  if ( *v6 < 0xC )
    goto LABEL_73;
  ProbeForRead(a4, *v6, 1u);
  if ( v14 + 2 < v14 )
  {
LABEL_71:
    UserSetLastError(87);
    return 0LL;
  }
  v15 = Win32AllocPoolWithQuotaZInit(v14 + 2, 1986294613LL);
  v11 = (_DWORD *)v15;
  if ( v15 )
  {
    PushW32ThreadLock(v15, &v27, (__int64)Win32FreePool);
    memmove(v11, a4, v14);
    *((_WORD *)v11 + ((unsigned __int64)v14 >> 1)) = 0;
    v6 = v11;
    if ( *v11 == v14 )
    {
      switch ( v11[1] )
      {
        case 3:
          if ( v14 >= 0x10 )
          {
            v25 = -1LL;
            do
              ++v25;
            while ( *((_WORD *)v11 + v25 + 6) );
            if ( (int)v25 + 1 >= (unsigned int)v25 )
            {
              v26 = 2LL * (unsigned int)(v25 + 1);
              if ( v26 <= 0xFFFFFFFF && (int)v26 + 12 >= (unsigned int)v26 && (int)v26 + 12 <= v14 )
                goto LABEL_8;
            }
          }
          v12 = 0LL;
          break;
        case 5:
          if ( v14 >= 0x20 )
          {
            v17 = -1LL;
            do
              ++v17;
            while ( *((_WORD *)v11 + v17 + 14) );
            if ( (int)v17 + 1 >= (unsigned int)v17 )
            {
              v18 = 2LL * (unsigned int)(v17 + 1);
              if ( v18 <= 0xFFFFFFFF && (int)v18 + 28 >= (unsigned int)v18 && (int)v18 + 28 <= v14 )
                goto LABEL_8;
            }
          }
          v12 = 0LL;
          break;
        case 6:
          if ( v14 < 0x38 )
          {
            v12 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_8;
            v16 = (int)v11[12];
            if ( (int)v16 < 0 )
              goto LABEL_8;
            if ( (v16 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v16 + 52 > v14 )
            {
              v12 = 0LL;
            }
            else
            {
              v21 = (unsigned __int64)v11 + v16 + 52;
              if ( v21 >= (unsigned __int64)(v11 + 13) )
              {
                v22 = -1LL;
                do
                  ++v22;
                while ( *(_WORD *)(v21 + 2 * v22) );
                if ( (int)v22 + 1 >= (unsigned int)v22 )
                {
                  v23 = 2LL * (unsigned int)(v22 + 1);
                  if ( v23 <= 0xFFFFFFFF )
                  {
                    v24 = v23 + 52;
                    if ( (int)v23 + 52 >= (unsigned int)v23
                      && (unsigned int)v16 + v24 >= v24
                      && (unsigned int)v16 + v24 <= v14 )
                    {
LABEL_8:
                      v12 = (*((__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned int *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
                             + ((a6 + 6) & 0x1F)))(
                              a1,
                              a2,
                              a3,
                              v6,
                              a5);
                      break;
                    }
                  }
                }
              }
              v12 = 0LL;
            }
          }
          break;
        case 7:
          if ( v14 >= 0x1A0 )
          {
            v19 = -1LL;
            do
              ++v19;
            while ( *((_WORD *)v11 + v19 + 8) );
            if ( (int)v19 + 1 >= (unsigned int)v19 )
            {
              v20 = 2LL * (unsigned int)(v19 + 1);
              if ( v20 <= 0xFFFFFFFF && (int)v20 + 16 >= (unsigned int)v20 && (int)v20 + 16 <= v14 )
                goto LABEL_8;
            }
          }
          v12 = 0LL;
          break;
        default:
          goto LABEL_8;
      }
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8);
    v12 = 0LL;
  }
  if ( v11 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v27);
  return v12;
}
