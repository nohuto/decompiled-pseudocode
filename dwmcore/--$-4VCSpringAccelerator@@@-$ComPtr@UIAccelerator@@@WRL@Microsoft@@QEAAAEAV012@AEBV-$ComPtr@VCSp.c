__int64 *__fastcall Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD))
{
  __int64 (__fastcall ***v2)(_QWORD); // rbx
  __int64 v4; // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v2 = v6;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = (__int64)v2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
