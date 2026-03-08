/*
 * XREFs of IopFreeIrpExtension @ 0x1402B18FC
 * Callers:
 *     IoSetActivityIdIrp @ 0x1402B2080 (IoSetActivityIdIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1402F9948 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IoCleanupIrp @ 0x1403CB400 (IoCleanupIrp.c)
 *     IopPerfCompleteRequest @ 0x14045735E (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140556880 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405568D0 (IoClearFsTrackOffsetState.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1402F98FC (IopFreeCopyObjectsFromIrp.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3))()
{
  char v3; // al
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(); // rbp
  __int64 v9; // rcx
  int v11; // eax
  int v12; // eax

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v8 = 0LL;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( (a2 == -1 || a2 == 5) && (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
      *(_QWORD *)(v4 + 40) = 0LL;
    if ( a2 != -1 && a2 != 9 )
      goto LABEL_14;
    if ( (unsigned __int8)IopIrpHasExtensionType(a1, 9LL) )
    {
      v12 = *(_DWORD *)(v9 + 16);
      if ( (v12 & 0x200) != 0 )
      {
        IopFreeCopyObjectsFromIrp(v9);
        *(_BYTE *)(a1 + 65) = 1;
      }
      else if ( (v12 & 0x100) != 0 )
      {
        v8 = IopCopyCompleteReadIrp;
      }
    }
    if ( a2 == -1 )
    {
      *(_WORD *)(v4 + 2) = 0;
    }
    else
    {
LABEL_14:
      v11 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v11;
      if ( (_WORD)v11 )
        return v8;
    }
    if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 && a3 )
    {
      ExFreePoolWithTag((PVOID)v4, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
      *(_QWORD *)(a1 + 200) = 0LL;
    }
  }
  return v8;
}
