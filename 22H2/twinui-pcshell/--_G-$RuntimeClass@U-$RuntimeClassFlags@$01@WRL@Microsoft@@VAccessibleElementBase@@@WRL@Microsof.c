/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180422CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Block + 14);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
