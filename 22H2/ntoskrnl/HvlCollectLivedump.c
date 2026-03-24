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
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD *v12; // r14
  __int64 v13; // r9
  __int16 v14; // ax
  int v15; // esi
  void *v16; // rcx
  unsigned int v17; // ebx
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-D0h]
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[112]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v24[64]; // [rsp+F0h] [rbp-10h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (HvlpRootFlags & 2) == 0 || !qword_140C47608 )
    return -1073741637;
  if ( VslVsmEnabled )
  {
    memset(v22, 0, 0x68uLL);
    result = VslpEnterIumSecureMode(2u, 251, 0, (__int64)v22);
    if ( result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, (__int64)v24, 32LL);
    v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, (__int64)v23, 16LL);
    v10 = *((_QWORD *)&v19 + 1);
    v11 = *((_QWORD *)&v21 + 1);
    v12 = v9;
    *v8 = 0LL;
    *(_OWORD *)(v8 + 1) = *(_OWORD *)a2;
    v8[3] = *(_QWORD *)(a2 + 16);
    v14 = HvcallInitiateHypercall(142, v11, v10, v13);
    if ( !v14 || v14 == 51 )
    {
      *a3 = *v12;
      v15 = 0;
    }
    else
    {
      v15 = -1073741823;
    }
    HvlpReleaseHypercallPage((__int64)&v18);
    HvlpReleaseHypercallPage((__int64)&v20);
    if ( v15 >= 0 )
    {
      v16 = *(void **)(a4 + 32);
      v17 = dword_140C47618 << 12;
      if ( v16 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v17 )
        memmove(v16, qword_140C47608, v17);
      else
        *(_QWORD *)(a4 + 32) = qword_140C47608;
      *(_DWORD *)(a4 + 40) = v17;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return v15;
  }
  return result;
}
