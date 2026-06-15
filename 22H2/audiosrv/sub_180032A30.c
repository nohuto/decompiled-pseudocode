/*
 * XREFs of sub_180032A30 @ 0x180032A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800E7160 @ 0x1800E7160 (sub_1800E7160.c)
 *     sub_1800E8F90 @ 0x1800E8F90 (sub_1800E8F90.c)
 */

__int64 __fastcall sub_180032A30(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r13
  _QWORD **v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r12d
  _QWORD **v10; // r15
  _QWORD *i; // rbx
  unsigned int v12; // r12d
  int v13; // ebx
  bool v14; // bl
  bool v15; // zf
  int v16; // ebx
  int v17; // eax
  _QWORD *v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 *v21; // rbx
  _QWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-51h] BYREF
  __int64 v33; // [rsp+28h] [rbp-49h] BYREF
  _QWORD *v34; // [rsp+30h] [rbp-41h] BYREF
  __int64 v35; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+40h] [rbp-31h] BYREF
  __int64 v37; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v38)(); // [rsp+78h] [rbp+7h]
  __int64 v39; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v40; // [rsp+D8h] [rbp+67h]
  int v41; // [rsp+E0h] [rbp+6Fh]
  int v42; // [rsp+E8h] [rbp+77h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v39 = a1;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v6 = (_QWORD **)(a1 + 88);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  LODWORD(v37) = 1;
  v36 = off_180154C10;
  v7 = 0LL;
  v38 = &v36;
  EnterCriticalSection(v5);
  v9 = 0;
  v10 = v6;
  while ( 2 )
  {
    if ( v7 )
      goto LABEL_61;
    for ( i = *v10; i != v10[1]; ++i )
    {
      v23 = (_QWORD *)*i;
      v34 = v23;
      if ( v23 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23);
      v32 = 0LL;
      if ( (int)sub_1800CD4DC(&v34, &v32) < 0 )
      {
        v25 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
LABEL_53:
        if ( !v23 )
          continue;
LABEL_54:
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
        continue;
      }
      if ( !v32 )
        goto LABEL_53;
      v33 = 0LL;
      if ( (int)sub_1800E7160(&v32, &v33) < 0 )
      {
        sub_1800461B8(&v33);
        v24 = v32;
        if ( !v32 )
          goto LABEL_45;
LABEL_44:
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_45;
      }
      v35 = v33;
      if ( !v38 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        goto LABEL_61;
      }
      if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*v38)[2])(v38, &v35) )
      {
        v7 = v33;
        v33 = 0LL;
        sub_1800461B8(&v33);
        v26 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v23 )
          (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
        break;
      }
      sub_1800461B8(&v33);
      v24 = v32;
      if ( v32 )
        goto LABEL_44;
LABEL_45:
      if ( v23 )
        goto LABEL_54;
    }
    ++v9;
    v10 += 3;
    if ( v9 < 4 )
      continue;
    break;
  }
  if ( !v7 )
  {
    v12 = -2005139430;
    v13 = -2005139430;
    goto LABEL_8;
  }
LABEL_61:
  v13 = 0;
  v12 = -2005139430;
LABEL_8:
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v38 )
  {
    if ( v38 == &v36 )
      v8 = 0LL;
    else
      LOBYTE(v8) = 1;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v8);
    v38 = 0LL;
  }
  v14 = v13 >= 0;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v15 = !v14;
  v16 = v42;
  if ( v15 )
  {
    v17 = v41;
  }
  else if ( !v42 || (v17 = v41) != 0 )
  {
    v12 = -2005139364;
    goto LABEL_32;
  }
  if ( v17 != 1 )
  {
    if ( *(_DWORD *)(v40 + 8) == 1 )
      goto LABEL_32;
    v18 = a5;
    v36 = off_180154BE0;
    v37 = v40;
    v38 = &v36;
    *a5 = 0LL;
    EnterCriticalSection(v5);
    v20 = 0;
    while ( 2 )
    {
      if ( *v18 )
        goto LABEL_92;
      v21 = *v6;
LABEL_23:
      if ( v21 == v6[1] )
      {
LABEL_24:
        ++v20;
        v6 += 3;
        if ( v20 < 4 )
          continue;
        if ( !*v18 )
        {
LABEL_26:
          if ( v5 )
            LeaveCriticalSection(v5);
          if ( v38 )
          {
            if ( v38 == &v36 )
              v19 = 0LL;
            else
              LOBYTE(v19) = 1;
            ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v38)[4])(v38, v19);
          }
          goto LABEL_32;
        }
LABEL_92:
        v12 = 0;
        goto LABEL_26;
      }
      break;
    }
    v27 = *v21;
    v35 = v27;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    v39 = 0LL;
    if ( (int)sub_1800CD4DC(&v35, &v39) < 0 )
    {
      v29 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    else if ( v39 )
    {
      a5 = 0LL;
      if ( (int)sub_1800E7160(&v39, &a5) >= 0 )
      {
        v34 = a5;
        if ( !v38 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_92;
        }
        if ( ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD **))(*v38)[2])(v38, &v34) )
        {
          v30 = a5;
          a5 = 0LL;
          *v18 = v30;
          sub_1800461B8(&a5);
          v31 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          goto LABEL_24;
        }
        sub_1800461B8(&a5);
        v28 = v39;
        if ( v39 )
        {
LABEL_75:
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      else
      {
        sub_1800461B8(&a5);
        v28 = v39;
        if ( v39 )
          goto LABEL_75;
      }
      if ( !v27 )
      {
LABEL_86:
        ++v21;
        goto LABEL_23;
      }
LABEL_85:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      goto LABEL_86;
    }
    if ( !v27 )
      goto LABEL_86;
    goto LABEL_85;
  }
  if ( (unsigned __int8)sub_1800E8F90(v39, 0LL) && !v16 )
    v12 = -2005139363;
LABEL_32:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_180171578, v12);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v12;
}
