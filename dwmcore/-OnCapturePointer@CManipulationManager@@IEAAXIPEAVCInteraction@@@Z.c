void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  int Key; // eax
  unsigned int v6; // r12d
  __int64 *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  int v9; // r15d
  int v10; // edx
  __int64 (__fastcall ***v11)(_QWORD); // rax
  __int64 (__fastcall ***v12)(_QWORD); // rdi
  __int64 (__fastcall ***v13)(_QWORD); // r14
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rbx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+58h] [rbp-20h] BYREF
  __int64 (__fastcall ***v25[3])(_QWORD); // [rsp+60h] [rbp-18h] BYREF
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+C8h] [rbp+50h] BYREF
  struct CInteraction *v28; // [rsp+D0h] [rbp+58h]
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+D8h] [rbp+60h] BYREF

  v28 = a3;
  v27 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          (int *)&v27);
  v6 = 2;
  if ( Key == -1 )
  {
    v23 = 0LL;
    v7 = &v23;
    v8 = 0LL;
    v9 = 1;
    v10 = 0;
  }
  else
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 21) + 8LL * Key);
    v26 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v26);
    v7 = (__int64 *)&v26;
    v9 = 0;
    v10 = 2;
  }
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  v24 = 0LL;
  v13 = 0LL;
  v21 = 0LL;
  if ( &v21 == (__int64 (__fastcall ****)(_QWORD))v7 )
  {
    v8 = v24;
  }
  else
  {
    *v7 = 0LL;
    v12 = v8;
    v11 = v8;
    v21 = v8;
    v22 = v8;
    v13 = v8;
  }
  if ( v10 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
    v11 = v22;
    v13 = v8;
  }
  if ( v9 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v23);
    v11 = v13;
  }
  if ( v11 )
    ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v12)[3])(v12, a2);
  v14 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 200,
          (int *)&v27);
  if ( v14 != -1 )
    v6 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL * v14);
  CManipulationManager::OnUp(this, v15, a2, v6, v12, 1, 1, 1, v21);
  v16 = (__int64)v28;
  LOBYTE(v20) = 1;
  LOBYTE(v19) = 0;
  LOBYTE(v18) = 1;
  CManipulationManager::OnNewContact(this, v28, a2, v6, v18, v19, v20);
  v29 = 0LL;
  v17 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          (int *)&v27);
  if ( v17 != -1
    && *Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v29, (_QWORD *)(*((_QWORD *)this + 21) + 8LL * v17)) )
  {
    v25[0] = 0LL;
    LODWORD(v24) = 1;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)v25);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64 (__fastcall ****)(_QWORD)))(*v29)[9])(
      v29,
      a2,
      &v24);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(v25, v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64 (__fastcall ****)(_QWORD)))(*v29)[11])(v29, &v24);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)v25);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v21);
}
