__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // esi
  __int64 (__fastcall ***v7)(_QWORD); // r14
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(const struct IManipulationContext *, __int64, _QWORD); // rsi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(_QWORD); // rbx
  bool v22; // al
  struct TargetingInfo *v23; // rcx
  int v25; // [rsp+20h] [rbp-79h]
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+28h] [rbp-71h] BYREF
  int v27; // [rsp+30h] [rbp-69h] BYREF
  __int64 (__fastcall ***v28)(_QWORD); // [rsp+38h] [rbp-61h] BYREF
  int v29; // [rsp+40h] [rbp-59h]
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  __int64 (__fastcall ***v31)(_QWORD); // [rsp+50h] [rbp-49h] BYREF
  struct TargetingInfo *v32; // [rsp+58h] [rbp-41h]
  char v33[8]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v34; // [rsp+68h] [rbp-31h] BYREF
  int v35; // [rsp+70h] [rbp-29h] BYREF
  char v36; // [rsp+74h] [rbp-25h]
  char v37; // [rsp+A8h] [rbp+Fh]

  v32 = a3;
  v26 = 0LL;
  v28 = 0LL;
  v27 = 1;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v28);
  v5 = ConvertToInputType(*(_DWORD *)a1, *((_DWORD *)a1 + 3));
  v29 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
          a2,
          *((unsigned int *)a1 + 1),
          &v27);
  v6 = v29;
  if ( v29 >= 0 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v27 && v28 && (unsigned int)(*v28)[18](v28) )
    {
      v25 = v27;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v26, &v28);
      v7 = v26;
    }
    else
    {
      v8 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, char *))(*(_QWORD *)a2 + 80LL))(
                       a2,
                       v33);
      v7 = 0LL;
      v9 = *v8;
      v10 = (__int64 *)(v8 + 2);
      v25 = v9;
      if ( &v30 != v10 )
      {
        v7 = (__int64 (__fastcall ***)(_QWORD))*v10;
        *v10 = 0LL;
      }
      v30 = 0LL;
      v26 = v7;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v34);
    }
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              v7,
              v5);
      if ( !v11
        || (v12 = *(_QWORD *)a2,
            v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(
              a2,
              v13,
              v5) > v11) )
      {
        v25 = 0;
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
        v7 = v26;
      }
    }
    v14 = *((_DWORD *)a1 + 3);
    if ( (v14 & 0x40000) != 0 )
    {
      if ( v27 )
      {
        if ( v28 != v7 )
        {
          v15 = ConvertToInputType(*(_DWORD *)a1, v14);
          if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a2, v15) )
          {
            v25 = 1;
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
            v7 = v26;
          }
        }
      }
    }
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v27 == 2 && v25 == 1 && v7 )
    {
      v25 = 1;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
      v7 = v26;
    }
    if ( v28 && v28 != v7 )
    {
      v16 = (__int64)v28;
      v17 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL);
      v18 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
      v19 = v17(a2, v18, v5);
      if ( (unsigned int)v17(a2, v16, v5) == v19
        && ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64))(*v28)[10])(v28, v5, 1LL) )
      {
        v20 = (__int64)v28;
        v30 = 0LL;
        v21 = (*v28)[16];
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v30);
        if ( ((int (__fastcall *)(__int64, _QWORD, __int64 *))v21)(v20, v5, &v30) >= 0 )
        {
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 40LL))(v30, &v35);
          v22 = v35 == 1 && ((v36 & 1) != 0 || (v36 & 2) != 0);
          if ( ((v37 & 1) == 0 || v22) && (unsigned int)(*v28)[17](v28) )
          {
            Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v26, &v28);
            v7 = v26;
            v25 = v27;
          }
        }
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v30);
      }
      v6 = v29;
    }
    if ( !v25 )
    {
      if ( !v27 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_49:
        v23 = v32;
        *(_DWORD *)v32 = v25;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v23 + 1, &v26);
        goto LABEL_50;
      }
      v25 = 1;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
      v7 = v26;
    }
    if ( v25 == 1 && !v7 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v30);
      if ( v31 )
      {
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v31);
        v6 = 0;
        v26 = v31;
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v31);
    }
    goto LABEL_49;
  }
LABEL_50:
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v26);
  return v6;
}
