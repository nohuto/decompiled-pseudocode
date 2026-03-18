/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009CC20
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02704E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FA7C0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3)
{
  struct XDCOBJ *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  DC *v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (DEVLOCKBLTOBJ *)((char *)this + 176);
  v5 = *((_QWORD *)this + 22);
  if ( v5 && *((_BYTE *)v3 + 49) )
  {
    v6 = *(_QWORD *)(v5 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 36) &= ~0x4000u;
      DC::pSurface(*(DC **)v3, *(struct SURFACE **)(v6 + 2528));
    }
    v7 = *((_QWORD *)this + 29);
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 72);
      CurrentProcess = PsGetCurrentProcess(v5, v6, a3);
      MmUnmapViewOfSection(CurrentProcess, v11);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v3);
    if ( *(_QWORD *)v3 && *((_BYTE *)v3 + 48) )
    {
      *(_DWORD *)(*(_QWORD *)v3 + 40LL) &= ~2u;
      *((_BYTE *)v3 + 48) = 0;
    }
    if ( *(_QWORD *)v3 )
    {
      if ( *((_DWORD *)v3 + 2) && (*(_DWORD *)(*(_QWORD *)v3 + 44LL) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper(v3);
        *(_DWORD *)(*(_QWORD *)v3 + 44LL) &= ~2u;
        *((_DWORD *)v3 + 2) = 0;
      }
      v8 = *(DC **)v3;
      v13 = 0;
      v9 = *(_QWORD *)v8;
      HmgDecrementExclusiveReferenceCountEx(v8, *((unsigned int *)v3 + 3), &v13);
      if ( v13 )
        GrepDeleteDC(v9, 0x2000000LL);
    }
    *(_QWORD *)v3 = 0LL;
  }
  return 1LL;
}
