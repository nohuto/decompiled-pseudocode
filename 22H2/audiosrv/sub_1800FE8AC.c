/*
 * XREFs of sub_1800FE8AC @ 0x1800FE8AC
 * Callers:
 *     sub_1800FD900 @ 0x1800FD900 (sub_1800FD900.c)
 *     sub_1800FDC30 @ 0x1800FDC30 (sub_1800FDC30.c)
 *     sub_1800FDCA0 @ 0x1800FDCA0 (sub_1800FDCA0.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800F3D60 @ 0x1800F3D60 (sub_1800F3D60.c)
 *     sub_1800FA0E0 @ 0x1800FA0E0 (sub_1800FA0E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FE8AC(char *pv, int a2, _WORD *a3)
{
  char *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rax
  struct _TP_WORK *ThreadpoolWork; // r15
  signed int LastError; // eax
  __int64 *v12; // rax
  __int64 **v13; // rcx
  unsigned int *v15; // rbx
  unsigned int *v16; // rbx
  _QWORD *v17; // [rsp+20h] [rbp-48h]
  _QWORD *v18; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v19; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v20; // [rsp+38h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v22; // [rsp+48h] [rbp-20h]

  v5 = pv;
  v6 = sub_18006A18C(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    sub_180003E08(v6, (__int64)&qword_18019F818);
    *((_DWORD *)v7 + 2) = a2;
    v7[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v17 = v7;
  v18 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_31;
  }
  if ( a3 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a3[v9] );
  }
  else
  {
    LODWORD(v9) = 0;
  }
  try
  {
    sub_18002BB70(v7, a3, v9);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = (unsigned int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      o__resetstkoflw();
    v8 = *v15;
    if ( (*v15 & 0x80000000) != 0 )
    {
      sub_1800FA0E0(v17);
      goto LABEL_31;
    }
    v5 = pv;
    v7 = v17;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)sub_1800FDD20, v5, 0LL);
  v7[2] = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x17u, (__int64)&unk_180172650, v8);
    }
    goto LABEL_31;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 160);
  v22 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  try
  {
    v8 = 0;
    v12 = sub_1800F3D60((__int64)(v5 + 200), (__int64 *)&v18, *((_QWORD *)v5 + 26));
    v13 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v13 )
      *v13 = v12;
    else
      *((_QWORD *)v5 + 25) = v12;
    *((_QWORD *)v5 + 26) = v12;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = (unsigned int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      o__resetstkoflw();
    v8 = *v16;
    if ( (*v16 & 0x80000000) != 0 )
      goto LABEL_29;
    v5 = pv;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_29:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_31:
  if ( v18 )
    sub_1800FA0E0(v18);
  return v8;
}
