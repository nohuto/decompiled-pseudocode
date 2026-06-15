/*
 * XREFs of sub_180050C80 @ 0x180050C80
 * Callers:
 *     sub_18002E060 @ 0x18002E060 (sub_18002E060.c)
 *     sub_1800475F0 @ 0x1800475F0 (sub_1800475F0.c)
 *     sub_1800C9970 @ 0x1800C9970 (sub_1800C9970.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180050FD0 @ 0x180050FD0 (sub_180050FD0.c)
 *     sub_1800510D4 @ 0x1800510D4 (sub_1800510D4.c)
 *     sub_1800511D8 @ 0x1800511D8 (sub_1800511D8.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_18005151C @ 0x18005151C (sub_18005151C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180050C80(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  SAFEARRAY *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  SAFEARRAY *v11; // rax
  HRESULT v12; // eax
  unsigned int v13; // r15d
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  int v25; // eax
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+38h]
  SAFEARRAYBOUND rgsabound; // [rsp+90h] [rbp+40h] BYREF
  SAFEARRAY *v31; // [rsp+98h] [rbp+48h] BYREF

  if ( !*(_QWORD *)(a1 + 992) || !*(_BYTE *)(a1 + 984) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  v27 = 0LL;
  LOWORD(v27) = 4;
  v28 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  DWORD2(v27) = *(_DWORD *)(a1 + 848);
  if ( v2 )
    LeaveCriticalSection(v2);
  v4 = (_DWORD *)sub_180008448(v3, sub_1800B6240)[1];
  if ( *v4 > 4u )
  {
    rgsabound.cElements = DWORD2(v27);
    v31 = *(SAFEARRAY **)(a1 + 728);
    sub_1800512F4((_DWORD)v4, (unsigned int)&unk_180166799, v5, v6, (__int64)&v31, (__int64)&rgsabound);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 992) + 48LL))(
         *(_QWORD *)(a1 + 992),
         &unk_18015C250,
         &v27);
  if ( v7 < 0 )
    sub_18006D26C(retaddr, 4569LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v7);
  v8 = 0LL;
  v31 = 0LL;
  EnterCriticalSection(v2);
  v10 = *(_DWORD *)(a1 + 960);
  if ( v10 )
  {
    rgsabound.cElements = *(_DWORD *)(a1 + 960);
    rgsabound.lLbound = 0;
    v11 = SafeArrayCreate(4u, 1u, &rgsabound);
    v31 = v11;
    v8 = v11;
    if ( v11 )
    {
      v12 = SafeArrayLock(v11);
      if ( v12 >= 0 )
      {
        v10 = *(_DWORD *)(a1 + 960);
        v13 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            rgsabound.cElements = *(_DWORD *)(*(_QWORD *)(a1 + 968) + 4LL * v13);
            v14 = sub_180050FD0(&v31, v13, &rgsabound);
            if ( v14 < 0 )
              break;
            v10 = *(_DWORD *)(a1 + 960);
            if ( ++v13 >= v10 )
              goto LABEL_15;
          }
          sub_18006D26C(
            retaddr,
            4588LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (unsigned int)v14);
          v10 = 0;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v12 = -2147024882;
    }
    sub_18006D26C(retaddr, 4584LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v12);
    v10 = *(_DWORD *)(a1 + 960);
  }
LABEL_15:
  v15 = (_DWORD *)sub_180008448(v9, sub_1800B6240)[1];
  if ( *v15 > 4u )
  {
    *(_QWORD *)&v27 = *(_QWORD *)(a1 + 968);
    WORD4(v27) = *(_WORD *)(a1 + 960);
    rgsabound = *(SAFEARRAYBOUND *)(a1 + 728);
    sub_1800511D8((_DWORD)v15, (unsigned int)&unk_180166731, v16, v17, (__int64)&rgsabound, (__int64)&v27);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v10 )
  {
    v18 = *(_QWORD *)(a1 + 992);
    *((_QWORD *)&v27 + 1) = v8;
    LOWORD(v27) = 8196;
    v19 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v18 + 48LL))(v18, &unk_18015C238, &v27);
    if ( v19 < 0 )
      sub_18006D26C(retaddr, 4610LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v19);
  }
  sub_18005151C(&v31);
  v28 = 0LL;
  v27 = 0LL;
  LOWORD(v27) = 11;
  EnterCriticalSection(v2);
  WORD4(v27) = -1;
  if ( !*(_DWORD *)(a1 + 852) )
    WORD4(v27) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v21 = (_DWORD *)sub_180008448(v20, sub_1800B6240)[1];
  if ( *v21 > 4u )
  {
    v31 = *(SAFEARRAY **)(a1 + 728);
    LOBYTE(rgsabound.cElements) = WORD4(v27) == 0xFFFF;
    sub_1800510D4((_DWORD)v21, (unsigned int)&unk_1801666DB, v22, v23, (__int64)&v31, (__int64)&rgsabound);
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 992) + 48LL))(
          *(_QWORD *)(a1 + 992),
          &unk_18015C220,
          &v27);
  if ( v24 < 0 )
    sub_18006D26C(retaddr, 4632LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v24);
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 992) + 56LL))(*(_QWORD *)(a1 + 992));
  if ( v25 < 0 )
    sub_18006D26C(retaddr, 4635LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v25);
  return 0LL;
}
