/*
 * XREFs of ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C0083AF0
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C007E5CC (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall CFlipManager::PostFlipManagerIFlipFrameStatistics(CFlipManager *this, struct CFlipManagerToken *a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-49h] BYREF
  CFlipPropertySetBase *v10; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+44h] [rbp-25h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-9h]
  GUID v18; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+80h] [rbp+17h]
  int *v20; // [rsp+88h] [rbp+1Fh]
  GUID v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+37h]
  _QWORD *v23; // [rsp+A8h] [rbp+3Fh]

  v2 = *((_QWORD *)a2 + 8);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 32);
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 10);
    v13 = 0LL;
    v14 = 0;
    v10 = 0LL;
    v11[0] = v7;
    v9 = 3;
    v11[1] = *(_QWORD *)(v5 + 16);
    v12 = *(_DWORD *)(v5 + 24);
    v15 = *(_QWORD *)(v2 + 88);
    v16 = v6;
    v17 = *(unsigned int *)(v5 + 40);
    v18 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
    v20 = &v9;
    v23 = v11;
    v19 = 4;
    v21 = GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571;
    v22 = 56;
    v3 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2u, (char *)&v18, 0, &v10);
    if ( v3 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, CFlipPropertySetBase *))(**((_QWORD **)this + 28) + 8LL))(
        *((_QWORD *)this + 28),
        v10);
      CFlipPropertySetBase::Release(v10);
    }
  }
  return (unsigned int)v3;
}
