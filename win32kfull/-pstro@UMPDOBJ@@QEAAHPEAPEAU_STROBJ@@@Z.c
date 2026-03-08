/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C029C71C
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02C0B90 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ebx
  void *v6; // r14
  void *v7; // rsi
  char *KernelPtr; // rax
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int128 v11; // xmm1
  void *v13; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  void *v15; // [rsp+58h] [rbp-18h]
  void *v16; // [rsp+60h] [rbp-10h]

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    v6 = (void *)v2[5];
    v13 = v6;
    if ( v6 )
    {
      if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v13, 2 * *(_DWORD *)v2) )
        return 0LL;
      v6 = v13;
    }
    v7 = (void *)v2[4];
    v13 = v7;
    if ( !v7 )
    {
LABEL_9:
      v11 = *((_OWORD *)v2 + 1);
      v14[0] = *(_OWORD *)v2;
      v14[1] = v11;
      v16 = v6;
      v15 = v7;
      LOBYTE(v3) = (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                   this,
                                   (UMPDOBJ *)((char *)this + 192),
                                   (const void **)a2,
                                   0x30u,
                                   v14) != 0;
      return v3;
    }
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v13, 24 * *(_DWORD *)v2) )
    {
      v7 = v13;
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, (char *)v13);
      for ( i = 0; i < *(_DWORD *)v2; *(_QWORD *)&KernelPtr[24 * v10 + 8] = 0LL )
        v10 = i++;
      goto LABEL_9;
    }
    return 0LL;
  }
  return 1LL;
}
