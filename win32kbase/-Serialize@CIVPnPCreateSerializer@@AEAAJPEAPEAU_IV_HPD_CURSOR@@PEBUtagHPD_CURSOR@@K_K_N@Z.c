/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0233EF4
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HPD_CURSOR **a2,
        const struct tagHPD_CURSOR *a3,
        __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // r10
  __int64 *v11; // r11
  __int64 v12; // r8
  _DWORD *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r8

  v6 = (a5 + 7) & 0xFFFFFFF8;
  if ( a6 )
  {
    *((_DWORD *)this + 2) += v6;
    return 0LL;
  }
  v7 = *((unsigned int *)this + 3);
  if ( CIVSerializer::Ensure(this, v6) )
  {
    v12 = v7 + *(_QWORD *)(v8 + 16);
    *v11 = v12;
    if ( v9 )
    {
      v13 = (_DWORD *)(v12 + 4);
      v14 = v10 - v12;
      v15 = v9;
      do
      {
        *(v13 - 1) = *(_DWORD *)((char *)v13 + v14 - 4);
        *v13 = *(_DWORD *)((char *)v13 + v14);
        v13[1] = *(_DWORD *)((char *)v13 + v14 + 4);
        v13 += 3;
        --v15;
      }
      while ( v15 );
    }
    *v11 = (*v11 - *(_QWORD *)(v8 + 16)) | 1;
    return 0LL;
  }
  return 3221225495LL;
}
