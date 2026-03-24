/*
 * XREFs of EtwTraceMoveRegion @ 0x1C014C740
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C014C084 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C014D064 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMoveRegion(int a1, int a2, char a3, RECT *a4)
{
  DWORD RegionPtrData; // eax
  DWORD v9; // edi
  struct _RGNDATA *v10; // rax
  __int64 v11; // rbx
  int v12; // r8d
  void *v13; // rdx

  if ( a4 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C0249748 - 1) > 2u
      && (qword_1C0249730 & 0x8000000000001000uLL) != 0
      && (qword_1C0249738 & 0x8000000000001000uLL) == qword_1C0249738 )
    {
      RegionPtrData = GrepGetRegionPtrData(a4, 0, 0LL);
      v9 = RegionPtrData;
      if ( RegionPtrData )
      {
        v10 = (struct _RGNDATA *)Win32AllocPool(RegionPtrData, 0x79737355u);
        v11 = (__int64)v10;
        if ( v10 )
        {
          if ( (unsigned int)GrepGetRegionPtrData(a4, v9, v10) )
          {
            if ( a2 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              {
                v13 = &DirtyRgnEvent;
                goto LABEL_14;
              }
            }
            else if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v13 = &MoveRgnEvent;
LABEL_14:
              McTemplateK0xqnqNR3_EtwWriteTransfer(v11 + 16, (_DWORD)v13, v12, a1, a3);
            }
          }
          Win32FreePool(v11);
        }
      }
    }
  }
}
