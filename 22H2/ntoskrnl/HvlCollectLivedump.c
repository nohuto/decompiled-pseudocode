/*
 * XREFs of HvlCollectLivedump @ 0x1404F8898
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409AC020 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

NTSTATUS __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  NTSTATUS result; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int16 v10; // ax
  int v11; // esi
  void *v12; // rcx
  unsigned int v13; // ebx
  _OWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[112]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v18[64]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  if ( (HvlpRootFlags & 2) == 0 || !qword_140C47608 )
    return -1073741637;
  if ( VslVsmEnabled )
  {
    memset(v16, 0, 0x68uLL);
    result = VslpEnterIumSecureMode(2u, 251, 0, (__int64)v16);
    if ( result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v15, 1, (__int64)v18, 32LL);
    v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v14, 2, (__int64)v17, 16LL);
    *v8 = 0LL;
    *(_OWORD *)(v8 + 1) = *(_OWORD *)a2;
    v8[3] = *(_QWORD *)(a2 + 16);
    v10 = HvcallInitiateHypercall(142);
    if ( !v10 || v10 == 51 )
    {
      *a3 = *v9;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)v14);
    HvlpReleaseHypercallPage((__int64)v15);
    if ( v11 >= 0 )
    {
      v12 = *(void **)(a4 + 32);
      v13 = dword_140C47618 << 12;
      if ( v12 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v13 )
        memmove(v12, qword_140C47608, v13);
      else
        *(_QWORD *)(a4 + 32) = qword_140C47608;
      *(_DWORD *)(a4 + 40) = v13;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return v11;
  }
  return result;
}
