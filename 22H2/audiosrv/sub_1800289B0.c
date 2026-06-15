/*
 * XREFs of sub_1800289B0 @ 0x1800289B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 */

__int64 __fastcall sub_1800289B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  __int64 v6; // r15
  _QWORD *i; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int16 *v16; // r15
  __int64 v17; // r14
  const void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int8 (__fastcall ***v22)(_QWORD); // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-20h]
  _BYTE v27[16]; // [rsp+38h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v26 = a2;
  *a3 = 0LL;
  v6 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  for ( i = *(_QWORD **)(a1 + 64); i != *(_QWORD **)(a1 + 72); ++i )
  {
    v10 = *i;
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*i);
    v11 = 0LL;
    v24 = 0LL;
    if ( !v10
      || (v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v10 + 24LL))(
                  v10,
                  &dword_18015B850,
                  &v24),
          v11 = v24,
          v12 < 0) )
    {
      if ( v11 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_13:
      if ( !v10 )
        continue;
      goto LABEL_14;
    }
    if ( !v24 )
      goto LABEL_13;
    v25 = 0LL;
    if ( (int)sub_1800CD548(&v24, &v25) < 0
      || *(_QWORD *)(v6 + 24) != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 104LL))(v25) )
    {
      goto LABEL_27;
    }
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 112LL))(v25, v27);
    v14 = *(_QWORD *)(v6 + 32) - *v13;
    if ( !v14 )
      v14 = *(_QWORD *)(v6 + 40) - v13[1];
    if ( v14 )
      goto LABEL_27;
    if ( *(_DWORD *)(v6 + 8) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 160LL))(v25) )
      goto LABEL_27;
    v15 = *(_QWORD *)(v6 + 16);
    if ( *(_WORD *)(v15 + 16) != *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 120LL))(v25) + 16) )
      goto LABEL_27;
    v16 = *(unsigned __int16 **)(v6 + 16);
    v17 = v16[8];
    v18 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 120LL))(v25);
    if ( !memcmp(v16, v18, v17 + 18) )
    {
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 136LL))(v25);
      v6 = v26;
      if ( *(_BYTE *)(v26 + 49) == v21
        && *(_BYTE *)(v6 + 48) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 152LL))(v25)
        && *(_BYTE *)(v6 + 50) == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 232LL))(v25) )
      {
        v22 = (unsigned __int8 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 256LL))(v25);
        if ( *(_QWORD *)(v6 + 56) )
        {
          if ( v22 && (**v22)(v22) )
          {
LABEL_34:
            *a3 = v25;
            v25 = 0LL;
            sub_1800461B8(&v25);
            v23 = v24;
            if ( v24 )
            {
              v24 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            break;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_34;
        }
      }
LABEL_27:
      sub_1800461B8(&v25);
      v20 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
LABEL_14:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      continue;
    }
    sub_1800461B8(&v25);
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v26;
  }
  v8 = -2147023728;
  if ( *a3 )
    v8 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
