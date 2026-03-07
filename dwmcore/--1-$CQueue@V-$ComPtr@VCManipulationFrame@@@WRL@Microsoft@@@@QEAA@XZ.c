void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v5, a3, 0LL);
    v4 = v5 != 0;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  }
  while ( v4 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
