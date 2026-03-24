/*
 * XREFs of GreSetMagicColors @ 0x1C0149888
 * Callers:
 *     SetSysColor @ 0x1C0020850 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C0149B30 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0011010 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A014 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A048 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C003C4C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0067EB0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0085A20 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00BEA44 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C01496A4 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v20; // [rsp+30h] [rbp-99h] BYREF
  struct PALETTE *v21; // [rsp+38h] [rbp-91h] BYREF
  HSEMAPHORE v22; // [rsp+40h] [rbp-89h] BYREF
  HSEMAPHORE v23; // [rsp+48h] [rbp-81h] BYREF
  HSEMAPHORE v24; // [rsp+50h] [rbp-79h] BYREF
  PERESOURCE v25; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v26[6]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v27[32]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v28[2]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v29[8]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+148h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v26[0] && (a3 - 8 <= 1 || a3 - 246 <= 1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_38:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
      goto LABEL_39;
    }
    v30 = *(_QWORD *)(v26[0] + 48LL);
    v9 = v30;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v25, (struct PDEVOBJ *)&v30);
    v24 = *(HSEMAPHORE *)(v9 + 64);
    EngAcquireSemaphore(v24);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v28);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v27, (struct PDEVOBJ *)&v30);
    if ( (*(_DWORD *)(v9 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
        if ( v28[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v28);
        PopThreadGuardedObject(v29);
        SEMOBJ::vUnlock((PERESOURCE *)&v24);
        NEEDGRELOCK::vUnlock(&v25, v17, v18);
        goto LABEL_38;
      }
      v10 = *(_QWORD *)(v9 + 1800);
      v11 = *(_QWORD **)v10;
      v12 = *(_DWORD *)(v10 + 16);
      while ( 1 )
      {
        v9 = v11[6];
        v30 = v9;
        if ( (*(_DWORD *)(v9 + 2172) & 0x100) != 0 )
          break;
        v11 = (_QWORD *)*v11;
        if ( !--v12 )
          goto LABEL_35;
      }
      v7 = 1;
    }
    v20 = *(_QWORD *)(v9 + 1808);
    v23 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v22 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v21 = ppalDefault;
    v13 = XEPALOBJ::ulDispatchGFPEFunction(&v21, *((_DWORD *)ppalDefault + 25), a2);
    v14 = v13;
    if ( v13 != -1 )
    {
      if ( v13 >= 0xA )
        v14 = v13 + 236;
      if ( v14 == a3 )
      {
        if ( !v7 )
        {
          v5 = 1;
          goto LABEL_29;
        }
      }
      else if ( v14 - 8 > 1 && v14 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v15 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v15 = 15780518;
        }
        else
        {
          v15 = 10789024;
          if ( a3 == 246 )
            v15 = 15793151;
        }
        v16 = bSetMagicColor((__int64)&v30, v20, a3, v15);
        goto LABEL_28;
      }
    }
    v16 = bSetMagicColor((__int64)&v30, v20, a3, a2);
    v5 = v16;
LABEL_28:
    v6 = v16;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v22);
    if ( v6 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v9 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v9 + 24) + 1800LL),
          &v20,
          0LL,
          0LL,
          *(_DWORD *)(v20 + 28));
      else
        v5 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v23);
    goto LABEL_35;
  }
LABEL_39:
  DCOBJ::~DCOBJ((DCOBJ *)v26);
  return v5;
}
