__int64 __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        CProcessAttributionManager::Record ***a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // rdx
  void **v7; // rdi
  CProcessAttributionManager::Record **v8; // rbx
  __int64 result; // rax
  char *v10; // rsi
  unsigned int *v11; // rcx
  _QWORD *v12; // r12
  _DWORD *v13; // r13
  bool v14; // dl
  __int64 *v15; // r14
  bool v16; // r8
  int v17; // r10d
  int v18; // r15d
  bool v19; // r9
  bool v20; // r10
  int v21; // ecx
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  CProcessAttributionManager::Record *v26; // rcx
  _BYTE *v27; // r13
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // esi
  int v33; // ebp
  int v34; // r15d
  unsigned int v35; // r12d
  unsigned int v36; // r13d
  CProcessAttributionManager::Record ***v37; // r14
  char v38; // [rsp+40h] [rbp-128h]
  int v39; // [rsp+48h] [rbp-120h] BYREF
  int v40; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-110h]
  void *v42; // [rsp+60h] [rbp-108h]
  __int64 v43; // [rsp+68h] [rbp-100h]
  unsigned int v44; // [rsp+70h] [rbp-F8h]
  __int64 v45; // [rsp+78h] [rbp-F0h] BYREF
  void *Src; // [rsp+80h] [rbp-E8h]
  _DWORD *v47; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD *v48; // [rsp+90h] [rbp-D8h] BYREF
  __int64 *v49; // [rsp+98h] [rbp-D0h]
  __int64 v50; // [rsp+A0h] [rbp-C8h]
  CProcessAttributionManager::Record ***v51; // [rsp+A8h] [rbp-C0h]
  _BYTE v52[96]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = a2;
  v43 = a2;
  v50 = a3;
  v51 = a1;
  v49 = a4;
  memset_0(v52, 0, 0x54uLL);
  v7 = *(void ***)(v4 + 16);
  v8 = *a1;
  result = (__int64)(v7 + 1);
  Src = v7 + 1;
  v10 = (char *)(v8 + 1);
LABEL_2:
  v42 = v10;
  while ( v7 != *(void ***)(v4 + 24) )
  {
    v6 = (unsigned __int64)*v8;
    v11 = (unsigned int *)*v7;
    v12 = *(_QWORD **)*v8;
    v13 = (_DWORD *)*((_QWORD *)*v8 + 14);
    v47 = v13;
    v48 = v12;
    if ( *(_QWORD **)v11 != v12 )
    {
      ++v8;
      v10 += 8;
      goto LABEL_2;
    }
    v40 = *(_DWORD *)(v6 + 120);
    v41 = v11[2];
    v38 = 0;
    if ( v13 )
    {
      Src = (char *)Src + 8;
      ++v7;
      v14 = v11[3] != v13[7];
      v15 = (__int64 *)v11[6];
      v16 = v11[4] != v13[8];
      v17 = v13[10];
      v18 = v13[6];
      v19 = v11[5] != v13[9];
      *(_OWORD *)(v11 + 2) = *(_OWORD *)(v13 + 6);
      v20 = (_DWORD)v15 != v17;
      v11[6] = v13[10];
      v21 = 0;
      v22 = v41 == v18;
    }
    else
    {
      v32 = *(_DWORD *)(v6 + 12);
      v33 = *(_DWORD *)(v6 + 16);
      v15 = (__int64 *)*(unsigned int *)(v6 + 20);
      v34 = *(_DWORD *)(v6 + 24);
      v35 = v11[3];
      v36 = v11[4];
      v39 = *(_DWORD *)(v6 + 8);
      v44 = v11[5];
      LODWORD(v45) = v11[6];
      v38 = 1;
      operator delete(v11, 0x70uLL);
      memmove_0(v7, Src, *(_QWORD *)(v43 + 24) - (_QWORD)Src);
      *(_QWORD *)(v43 + 24) -= 8LL;
      --*((_DWORD *)*v8 + 40);
      v22 = v35 == v32;
      v12 = v48;
      v14 = !v22;
      v22 = v36 == v33;
      v13 = v47;
      v16 = !v22;
      v19 = v44 != (_DWORD)v15;
      v20 = (_DWORD)v45 != v34;
      v21 = 0;
      v22 = v41 == v39;
    }
    LOBYTE(v21) = !v22;
    v23 = v21 | 2;
    if ( !v14 )
      v23 = v21;
    v24 = v23 | 4;
    if ( !v16 )
      v24 = v23;
    result = v24 | 8;
    if ( !v19 )
      result = v24;
    v25 = result | 0x10;
    if ( !v20 )
      v25 = result;
    v6 = v25 | 0x20;
    if ( !v38 )
      v6 = v25;
    if ( (_DWORD)v6 )
    {
      if ( v13 )
        v27 = v13 + 11;
      else
        v27 = v52;
      if ( *((_QWORD *)*v8 + 18) )
      {
        v28 = (_QWORD *)((char *)*v8 + 128);
        if ( *((_QWORD *)*v8 + 19) >= 8uLL )
          v28 = (_QWORD *)*v28;
      }
      else
      {
        v28 = 0LL;
      }
      v48 = v28;
      v45 = v50;
      v39 = v6;
      v47 = v12;
      v29 = v49[7];
      if ( !v29 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        goto LABEL_40;
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, _DWORD **, _QWORD **, int *, _BYTE *))(*(_QWORD *)v29 + 16LL))(
                 v29,
                 &v45,
                 &v40,
                 &v47,
                 &v48,
                 &v39,
                 v27);
    }
    v26 = *v8;
    if ( *((_DWORD *)*v8 + 40) )
    {
      ++v8;
      v4 = v43;
      v10 = (char *)v42 + 8;
      goto LABEL_2;
    }
    if ( v26 )
      CProcessAttributionManager::Record::`scalar deleting destructor'(v26, v6);
    v10 = (char *)v42;
    v37 = v51;
    result = (__int64)memmove_0(v8, v42, (char *)v51[1] - (_BYTE *)v42);
    --v37[1];
    v4 = v43;
  }
  v15 = v49;
  v30 = (__int64 *)v49[7];
  if ( !v30 )
    return result;
  v31 = *v30;
  if ( v30 == v49 )
  {
    v6 = 0LL;
    goto LABEL_31;
  }
LABEL_40:
  LOBYTE(v6) = 1;
LABEL_31:
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v31 + 32))(v30, v6);
  v15[7] = 0LL;
  return result;
}
