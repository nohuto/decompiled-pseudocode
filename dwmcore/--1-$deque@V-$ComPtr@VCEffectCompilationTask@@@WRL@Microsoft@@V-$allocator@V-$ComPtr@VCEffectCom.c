void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
