__int64 __fastcall CManipulationContext::Revalidate(struct MCCollections *a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // r14
  CManipulationContext *v6; // rbx
  CManipulationContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    v5 = 0LL;
    do
    {
      v8 = *(CManipulationContext **)(v5 + *((_QWORD *)a1 + 3));
      v6 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v8);
      if ( (*((_BYTE *)v6 + 28) & 4) != 0 )
        CManipulationContext::RevalidateMCTree(v6, a1);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v8);
      ++v2;
      v5 += 8LL;
    }
    while ( v2 < *((_DWORD *)a1 + 8) );
  }
  CManipulationContext::RevalidateMCsAndLists(a1, (int *)&v8);
  return CManipulationContext::RevalidationCleanup((unsigned int)v8, a1, a2);
}
