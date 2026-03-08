/*
 * XREFs of SepInitializeCodeIntegrity @ 0x1408105C8
 * Callers:
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     SepIsOptionPresent @ 0x140810688 (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int *v3; // rdx

  v0 = 6;
  memset(&unk_140C375C4, 0, 0xECuLL);
  v1 = 0LL;
  SeCiCallbacks = 248;
  qword_140C376B0 = 167772172LL;
  if ( KeLoaderBlock_0 )
  {
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v2 )
    {
      v3 = *(unsigned int **)(v2 + 2904);
      if ( v3 )
        v0 = *v3;
    }
    if ( *(_QWORD *)(KeLoaderBlock_0 + 216) && (unsigned int)SepIsOptionPresent() )
      SeCiDebugOptions |= 1u;
    if ( KeLoaderBlock_0 )
      v1 = KeLoaderBlock_0 + 48;
  }
  return CiInitialize(v0, v1, &SeCiCallbacks, SeCiPrivateApis);
}
