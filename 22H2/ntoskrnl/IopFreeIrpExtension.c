/*
 * XREFs of IopFreeIrpExtension @ 0x1402E5F78
 * Callers:
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 *     IoSetActivityIdIrp @ 0x140378C70 (IoSetActivityIdIrp.c)
 *     IoCleanupIrp @ 0x140391C10 (IoCleanupIrp.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0CC0 (IopCopyCompleteReadIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F1110 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507770 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405077C0 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x140507D14 (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402E6690 (IopIrpHasExtensionType.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F11A4 (IopFreeCopyObjectsFromIrp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3))()
{
  char v3; // al
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(); // rbp
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v8 = 0LL;
  if ( v3 >= 0 )
  {
    if ( v4 )
    {
      if ( (a2 == 5 || a2 == -1) && (unsigned __int8)IopIrpHasExtensionType() )
        *(_QWORD *)(v4 + 40) = 0LL;
      if ( a2 != 9 && a2 != -1 )
        goto LABEL_16;
      if ( (unsigned __int8)IopIrpHasExtensionType() )
      {
        v10 = *(_DWORD *)(v9 + 16);
        if ( (v10 & 0x200) != 0 )
        {
          IopFreeCopyObjectsFromIrp();
          *(_BYTE *)(a1 + 65) = 1;
        }
        else if ( (v10 & 0x100) != 0 )
        {
          v8 = IopCopyCompleteReadIrp;
        }
      }
      if ( a2 == -1 )
        LOWORD(v11) = 0;
      else
LABEL_16:
        v11 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v11;
      if ( !(_WORD)v11 && (*(_BYTE *)(a1 + 71) & 0x40) != 0 && a3 )
      {
        ExFreePoolWithTag((PVOID)v4, 0x58707249u);
        *(_BYTE *)(a1 + 71) &= ~0x40u;
        *(_QWORD *)(a1 + 200) = 0LL;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  return v8;
}
