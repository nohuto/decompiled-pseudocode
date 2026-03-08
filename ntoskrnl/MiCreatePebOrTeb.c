/*
 * XREFs of MiCreatePebOrTeb @ 0x1406A35BC
 * Callers:
 *     MmCreateTeb @ 0x1406A32D8 (MmCreateTeb.c)
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     MiInitializeWowPeb @ 0x140795138 (MiInitializeWowPeb.c)
 * Callees:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 */

__int64 __fastcall MiCreatePebOrTeb(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx

  *a3 = 0LL;
  if ( (_DWORD)a1 )
  {
    v3 = 6224LL;
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (_DWORD)a1 )
      {
        case 5:
          v3 = 12312LL;
          break;
        case 6:
          v3 = 14416LL;
          break;
        case 1:
          v3 = 1200LL;
          break;
        case 2:
          v3 = 2040LL;
          break;
      }
    }
  }
  else
  {
    v3 = 2000LL;
  }
  return MiAllocateFromSubAllocatedRegion(a1, (v3 + 4095) & 0xFFFFF000LL);
}
