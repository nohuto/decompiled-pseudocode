/*
 * XREFs of ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C03CCD2C
 * Callers:
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03CD888 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0047790 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D2708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall BLTQUEUE::DestroyStagingBuffer(BLTQUEUE *this)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // r8
  int v6; // ecx
  struct DXGALLOCATION **v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  DXGDEVICE *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx
  _BYTE v14[24]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 45);
  if ( !v1 )
    goto LABEL_26;
  v3 = *(_QWORD *)(v1 + 40);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v3 + 56), &ApcState);
  *(_BYTE *)(*((_QWORD *)this + 45) + 1937LL) = 1;
  if ( *((_DWORD *)this + 698) )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v14,
      (struct DXGPROCESS *)v3);
    v4 = (*((_DWORD *)this + 698) >> 6) & 0xFFFFFF;
    if ( v4 < *(_DWORD *)(v3 + 296) )
    {
      v5 = *(_QWORD *)(v3 + 280);
      if ( ((*((_DWORD *)this + 698) >> 25) & 0x60) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x60)
        && (*(_DWORD *)(v5 + 16LL * v4 + 8) & 0x2000) == 0 )
      {
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8) & 0x1F;
        if ( v6 )
        {
          if ( v6 == 4 )
          {
            v7 = *(struct DXGALLOCATION ***)(v5 + 16LL * v4);
            if ( v7 )
            {
LABEL_11:
              v8 = *((_DWORD *)this + 698);
              v9 = (v8 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v9 < *(_DWORD *)(v3 + 296) )
              {
                v10 = *(_QWORD *)(v3 + 280);
                v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
                if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
                  && (v11 & 0x2000) == 0
                  && (v11 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v10 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
              v12 = (DXGDEVICE *)*((_QWORD *)this + 45);
              if ( *((_DWORD *)v12 + 152) == 4 )
                DXGDEVICE::DestroyClientResource(v12, v7);
              else
                DXGDEVICE::DestroyAllocationInternal(
                  v12,
                  0,
                  0LL,
                  (struct DXGRESOURCE *)v7,
                  0LL,
                  (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
              goto LABEL_21;
            }
LABEL_10:
            WdLogSingleEntry1(1LL, 4342LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource != NULL", 4342LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_11;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v7 = 0LL;
    goto LABEL_10;
  }
LABEL_21:
  if ( *((_DWORD *)this + 704) )
  {
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 353);
    if ( v13 )
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
    *((_DWORD *)this + 704) = 0;
    *((_QWORD *)this + 353) = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)this + 45) + 1937LL) = 0;
  KeUnstackDetachProcess(&ApcState);
LABEL_26:
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = 0LL;
}
