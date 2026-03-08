/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x14094D8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopIssueTrEERequest @ 0x140559560 (IopIssueTrEERequest.c)
 *     IopEfiStatusToNTSTATUS @ 0x14094D674 (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 (__fastcall *a4)(char *, char *, __int64, _QWORD),
        __int64 a5,
        _DWORD *a6)
{
  _OWORD *v8; // r15
  __int64 v9; // r14
  _DWORD *v10; // rbp
  _OWORD *Pool2; // r13
  __int64 v12; // rdi
  int v13; // ebx
  char *v14; // rsi
  __int64 v15; // r13
  _OWORD *v16; // rbx
  void *v17; // r9
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  signed __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  signed __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rax
  void *v27; // rbp
  unsigned __int64 v28; // rbx
  _DWORD *v29; // rdi
  _DWORD *v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rbx
  int v33; // ebp
  int v34; // [rsp+50h] [rbp-88h] BYREF
  _OWORD *v35; // [rsp+58h] [rbp-80h]
  __int64 v36; // [rsp+60h] [rbp-78h]
  __int64 v37; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+70h] [rbp-68h]
  unsigned __int64 v39; // [rsp+78h] [rbp-60h]
  _OWORD *v40; // [rsp+80h] [rbp-58h]

  v34 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v38) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(256LL, 532LL, 2035511113LL);
  v35 = Pool2;
  if ( Pool2 )
  {
    v14 = (char *)ExAllocatePool2(256LL, 544LL, 2035511113LL);
    if ( v14
      && (a3 != 2
       || (v8 = (_OWORD *)ExAllocatePool2(256LL, 532LL, 2035511113LL)) != 0LL
       && (v38 = 288LL, (v9 = ExAllocatePool2(256LL, 288LL, 2035511113LL)) != 0)) )
    {
      v12 = a5;
      v15 = a5;
      v16 = v35;
      v39 = a5 + (unsigned int)*a6;
      *a6 = 0;
      v36 = a5;
      v17 = v16 + 1;
      v40 = v16 + 1;
      while ( 1 )
      {
        v37 = v12;
        *v16 = *(_OWORD *)(v14 + 8);
        memmove(v17, v14 + 28, *((unsigned int *)v14 + 6));
        *((_WORD *)v16 + ((unsigned __int64)*((unsigned int *)v14 + 6) >> 1) + 8) = 0;
        v18 = IopIssueTrEERequest(1, a1, a2, (__int64)v16, 0x214u, (__int64)v14, 0x220u, 0x1Cu, &v34);
        LODWORD(v20) = 0;
        v13 = v18;
        if ( v18 < 0 )
          break;
        v21 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 == 0x800000000000000EuLL )
        {
          v13 = 0;
          break;
        }
        if ( v21 < 0 )
        {
          v13 = IopEfiStatusToNTSTATUS(v21);
          break;
        }
        if ( a4 )
        {
          v22 = a4(v14 + 8, v14 + 28, v19, 0LL);
          v16 = v35;
          v17 = v35 + 1;
          if ( !v22 )
            continue;
        }
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v14 + 8);
          memmove(v8 + 1, v14 + 28, *((unsigned int *)v14 + 6));
          while ( 1 )
          {
            v23 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, v9, v38, 0x18u, &v34);
            v20 = 0LL;
            v13 = v23;
            if ( v23 < 0 )
              goto LABEL_42;
            v24 = *(_QWORD *)v9;
            if ( *(_QWORD *)v9 == 0x8000000000000005uLL )
            {
              if ( !v12 )
                goto LABEL_27;
              v25 = *(_DWORD *)(v9 + 16) + 32;
              v38 = v25;
              ExFreePoolWithTag((PVOID)v9, 0);
              v26 = ExAllocatePool2(256LL, v25, 2035511113LL);
              v20 = 0LL;
              v9 = v26;
              if ( !v26 )
              {
                v13 = -1073741670;
                goto LABEL_42;
              }
              v13 = -1073741789;
            }
            else if ( v24 < 0 )
            {
              v13 = IopEfiStatusToNTSTATUS(v24);
LABEL_27:
              if ( v13 < 0 )
                goto LABEL_42;
              v27 = (void *)((*((unsigned int *)v14 + 6) + v36 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v28 = ((unsigned __int64)v27 + *(_QWORD *)(v9 + 16) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v28 <= v39 )
              {
                if ( v12 )
                {
                  v29 = (_DWORD *)v36;
                  *(_OWORD *)(v36 + 16) = *(_OWORD *)(v14 + 8);
                  memmove(v29 + 8, v14 + 28, *((unsigned int *)v14 + 6));
                  v29[1] = (_DWORD)v27 - (_DWORD)v29;
                  memmove(v27, (const void *)(v9 + 24), *(_QWORD *)(v9 + 16));
                  v29[2] = *(_DWORD *)(v9 + 16);
                  v29[3] = *(_DWORD *)(v9 + 8);
                  *v29 = v28 - (_DWORD)v29;
                  v12 = v37;
                }
              }
              else
              {
                v12 = v20;
              }
              v30 = (_DWORD *)v36;
              v31 = v28 - v36;
              v36 = v28;
              *a6 += v31;
              v10 = v30;
              goto LABEL_38;
            }
            if ( v13 != -1073741789 )
              goto LABEL_27;
          }
        }
        v32 = (v15 + *((unsigned int *)v14 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        v33 = (v15 + *((_DWORD *)v14 + 6) + 27) & 0xFFFFFFF8;
        if ( v32 <= v39 )
        {
          if ( v12 )
          {
            *(_OWORD *)(v15 + 4) = *(_OWORD *)(v14 + 8);
            memmove((void *)(v15 + 20), v14 + 28, *((unsigned int *)v14 + 6));
            *(_DWORD *)v15 = v32 - v15;
          }
        }
        else
        {
          v12 = 0LL;
        }
        *a6 += v33 - v15;
        v10 = (_DWORD *)v15;
        v15 = v32;
LABEL_38:
        v16 = v35;
        v17 = v40;
      }
LABEL_42:
      Pool2 = v35;
      if ( v10 && v12 )
        *v10 = v20;
    }
    else
    {
      v12 = a5;
      v13 = -1073741670;
    }
    ExFreePoolWithTag(Pool2, 0);
    LODWORD(v10) = 0;
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag((PVOID)v9, 0);
  }
  else
  {
    v12 = a5;
    v13 = -1073741670;
  }
  if ( !v12 && *a6 != (_DWORD)v10 )
    return (unsigned int)-1073741789;
  return (unsigned int)v13;
}
