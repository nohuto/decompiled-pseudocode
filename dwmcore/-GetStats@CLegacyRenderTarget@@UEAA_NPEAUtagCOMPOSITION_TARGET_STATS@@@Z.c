char __fastcall CLegacyRenderTarget::GetStats(CLegacyRenderTarget *this, struct tagCOMPOSITION_TARGET_STATS *a2)
{
  __int64 v4; // rbx
  struct CComposition *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v18; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+28h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+48h] [rbp-18h]

  if ( !*((_QWORD *)this - 2321) )
    goto LABEL_17;
  QueryPerformanceCounter(&PerformanceCount);
  v4 = *((_QWORD *)this - 2321);
  if ( PerformanceCount.QuadPart > *((_QWORD *)this - 27) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this - 2321));
    *((_DWORD *)this - 66) = v15;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( v15 )
    {
      if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 112LL))(v4, &v20) >= 0 )
      {
        v16 = *((_DWORD *)this - 66);
        v17 = v20;
        if ( v16 >= (unsigned int)v20 )
        {
          *((_DWORD *)this - 58) = v20;
          *((_DWORD *)this - 65) = v16 - v17;
          *((_DWORD *)this - 64) = v21;
          *((_DWORD *)this - 63) = DWORD1(v22);
          *((_QWORD *)this - 31) = *((_QWORD *)&v21 + 1);
          *((_QWORD *)this - 30) = *((_QWORD *)&v22 + 1);
          *((_DWORD *)this - 57) = DWORD1(v20);
          *((_QWORD *)this - 28) = *((_QWORD *)&v20 + 1);
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
          *((_QWORD *)this - 27) = *((_QWORD *)&v21 + 1) + 9 * v18 / 0xAuLL;
          goto LABEL_3;
        }
      }
    }
    *(_QWORD *)((char *)this - 260) = 0LL;
    *((_QWORD *)this - 31) = 0LL;
    *((_QWORD *)this - 30) = 0LL;
    *((_QWORD *)this - 29) = 0LL;
    *((_QWORD *)this - 28) = 0LL;
LABEL_17:
    *(_DWORD *)a2 = 0;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 5) = 0LL;
    goto LABEL_10;
  }
LABEL_3:
  v5 = g_pComposition;
  *(_DWORD *)a2 = *((_DWORD *)this - 65);
  v6 = 0LL;
  if ( v5 )
    v6 = *((_QWORD *)v5 + 62);
  if ( *((_QWORD *)this - 25) == v6 )
    v7 = *((_QWORD *)this - 26);
  else
    v7 = 0LL;
  *((_QWORD *)a2 + 1) = v7;
  *((_QWORD *)a2 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 2321) + 72LL))(*((_QWORD *)this - 2321));
  v8 = *((_QWORD *)this - 2321);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this - 66);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this - 65) + *((_DWORD *)this - 64);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8);
  *((_QWORD *)a2 + 5) = *((_QWORD *)this - 31) + v9 * *((unsigned int *)this - 65);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8);
  v11 = *((_QWORD *)this - 30);
  v12 = v10;
  if ( v11 )
    v13 = (*((_QWORD *)a2 + 5) + (v9 >> 1) - v11) / v9;
  else
    LODWORD(v13) = *((_DWORD *)this - 65);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this - 63) + (unsigned int)v13 / v12;
LABEL_10:
  *((_DWORD *)a2 + 12) = *((_DWORD *)this - 58);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this - 57);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this - 63);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this - 28);
  return 1;
}
