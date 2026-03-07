__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 (__fastcall ***v6)(_QWORD); // rbx
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD); // rax
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD); // rax
  __int64 v11; // rax
  void (__fastcall *v12)(__int64 *, int *); // rbx
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v15)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ***v18)(_QWORD); // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+78h] [rbp-88h] BYREF
  __int16 v20; // [rsp+80h] [rbp-80h] BYREF
  char v21; // [rsp+82h] [rbp-7Eh]
  __int128 v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  __int16 v25; // [rsp+A8h] [rbp-58h] BYREF
  char v26; // [rsp+AAh] [rbp-56h]
  __int128 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  __int128 v30; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = 0;
  v15 = 0LL;
  v18 = 0LL;
  v19 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v6 = v19;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
  *(_QWORD *)((char *)&v33 + 4) = 0LL;
  HIDWORD(v33) = 0;
  v27 = 0LL;
  LOWORD(v33) = 0;
  v22 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v29 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0LL;
  v24 = 0;
  v20 = 0;
  v21 = 0;
  v31 = 0LL;
  v32 = 0;
  v14 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v7 = *a1;
    v14 = 2;
    v8 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v7 + 16))(a1);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v15, v8);
  }
  v9 = v14;
  if ( v14 != 3 )
    goto LABEL_6;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v15);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              (__int64)a1,
              v6,
              a2,
              (__int64)&v25,
              (__int64)&v20,
              (__int64 (__fastcall ***)(_QWORD))&v30,
              &v33,
              &v14,
              &v15,
              &v18) >= 0 )
  {
    v9 = v14;
    if ( v14 == 3 )
    {
LABEL_11:
      v11 = *a1;
      v16 = 1;
      v17 = v18;
      v12 = *(void (__fastcall **)(__int64 *, int *))(v11 + 104);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
      v12(a1, &v16);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v17);
      goto LABEL_12;
    }
LABEL_6:
    if ( v9 != 4 )
    {
      LOBYTE(v3) = v9 != 1;
      v17 = v15;
      v16 = v3;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v17);
      if ( v14 == 2 )
      {
        v10 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        if ( v15 == v10 )
          Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v17);
      }
      (*(void (__fastcall **)(__int64 *, int *))(*a1 + 88))(a1, &v16);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v17);
    }
    goto LABEL_11;
  }
LABEL_12:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v22);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v18);
  return Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v15);
}
