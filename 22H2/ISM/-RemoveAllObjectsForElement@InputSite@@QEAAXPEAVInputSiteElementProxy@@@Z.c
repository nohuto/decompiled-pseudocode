/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180001E74
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x180001BE0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 *     ?OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ @ 0x1800F22E0 (-OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180001F08 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x180001F44 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180018328 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  struct InputSiteElementProxy **v2; // rsi
  struct InputSiteElementProxy **i; // rbx
  struct InputSiteElementProxy **j; // rdi
  __int64 v6; // rbx
  struct InputSiteElementProxy *v7; // [rsp+38h] [rbp+10h]

  v7 = a2;
  v2 = (struct InputSiteElementProxy **)*((_QWORD *)this + 51);
  for ( i = (struct InputSiteElementProxy **)*((_QWORD *)this + 50); i != v2 && *i != a2; i += 2 )
    ;
  if ( i != v2 )
  {
    for ( j = i + 2; j != v2; j += 2 )
    {
      if ( *j != a2 )
      {
        *i = *j;
        Microsoft::WRL::ComPtr<IInputTarget>::operator=(i + 1, j + 1);
        a2 = v7;
        i += 2;
      }
    }
  }
  v6 = std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
         v2,
         *((_QWORD *)this + 51),
         i);
  std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(v6, *((_QWORD *)this + 51));
  *((_QWORD *)this + 51) = v6;
}
