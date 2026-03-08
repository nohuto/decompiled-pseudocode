/*
 * XREFs of ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1800EE378
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800EE1EC (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1800EE404 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800F0480 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyDeviceResources(union _SLIST_HEADER *this)
{
  CD3DResourceManager *v1; // rdi
  CD3DResourceManager *Alignment; // rax
  int v4; // esi
  CD3DResourceManager **v5; // r14

  v1 = (CD3DResourceManager *)&this[2];
  Alignment = (CD3DResourceManager *)this[2].Alignment;
  if ( Alignment != (CD3DResourceManager *)&this[2] )
  {
    v4 = 0;
    v5 = (CD3DResourceManager **)&this[2];
    do
    {
      if ( *((_QWORD *)Alignment - 1) )
      {
        CD3DResourceManager::DestroyResource(
          (CD3DResourceManager *)this,
          (CD3DResourceManager *)((char *)Alignment - 32));
      }
      else
      {
        ++v4;
        v5 = (CD3DResourceManager **)Alignment;
      }
      Alignment = *v5;
    }
    while ( *v5 != v1 );
    while ( QueryDepthSList(this + 1) != v4 )
      Sleep(1u);
    CD3DResourceManager::DestroyReleasedResources((CD3DResourceManager *)this);
  }
}
