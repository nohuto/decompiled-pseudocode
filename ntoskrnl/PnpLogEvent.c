/*
 * XREFs of PnpLogEvent @ 0x140955B40
 * Callers:
 *     PnpQueryID @ 0x1406882B4 (PnpQueryID.c)
 *     PnpFixupID @ 0x140688430 (PnpFixupID.c)
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     PpCheckInDriverDatabase @ 0x14079DC60 (PpCheckInDriverDatabase.c)
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 *     PpBootDDBHelper @ 0x14081D504 (PpBootDDBHelper.c)
 *     PnpLogDuplicateDevice @ 0x140956834 (PnpLogDuplicateDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1403C13F0 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140554348 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall PnpLogEvent(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 GenericErrorLogEntry; // rax
  _WORD *v13; // rbx
  char *v14; // rsi
  char *v15; // rsi

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 + v11 + v9 <= 0xF0 )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry((unsigned __int8)v10 + (unsigned __int8)v11
                                                                               + (unsigned __int8)v9);
    v13 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_WORD *)(GenericErrorLogEntry + 6) = v11;
      v14 = (char *)(GenericErrorLogEntry + v11);
      *(_DWORD *)(GenericErrorLogEntry + 12) = a3;
      *(_DWORD *)(GenericErrorLogEntry + 20) = a3;
      *(_WORD *)(GenericErrorLogEntry + 2) = Size;
      if ( Size )
        memmove((void *)(GenericErrorLogEntry + 40), a4, Size);
      if ( a1 )
      {
        v13[2] = 1;
        memmove(v14, a1[1], *(unsigned __int16 *)a1);
        v15 = &v14[*(unsigned __int16 *)a1];
        *(_WORD *)v15 = 0;
        v14 = v15 + 2;
      }
      if ( a2 )
      {
        ++v13[2];
        memmove(v14, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v14[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v13);
    }
  }
}
