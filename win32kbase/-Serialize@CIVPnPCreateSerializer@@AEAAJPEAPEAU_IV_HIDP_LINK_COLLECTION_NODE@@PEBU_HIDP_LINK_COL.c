/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C0233E0C
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVI.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HIDP_LINK_COLLECTION_NODE **a2,
        const struct _HIDP_LINK_COLLECTION_NODE *a3,
        __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 *v12; // r11
  __int64 v13; // rdx
  USHORT *v14; // rdx
  USHORT *p_Parent; // r8
  USHORT v16; // ax
  unsigned int v17; // eax

  v7 = (a5 + 7) & 0xFFFFFFF8;
  if ( a6 )
  {
    *((_DWORD *)this + 2) += v7;
    return 0LL;
  }
  v8 = *((unsigned int *)this + 3);
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v13 = v8 + *(_QWORD *)(v9 + 16);
    *v12 = v13;
    if ( (_DWORD)v10 )
    {
      v14 = (USHORT *)(v13 + 8);
      v10 = (unsigned int)v10;
      p_Parent = &a3->Parent;
      do
      {
        *(v14 - 4) = *(p_Parent - 2);
        *(v14 - 2) = *(p_Parent - 1);
        v16 = *p_Parent;
        p_Parent += 12;
        *v14 = v16;
        v14 += 24;
        *(v14 - 22) = *(p_Parent - 11);
        *(v14 - 20) = *(p_Parent - 10);
        *(v14 - 18) = *(p_Parent - 9);
        *((_DWORD *)v14 - 8) = (unsigned __int8)*((_DWORD *)p_Parent - 4);
        *((_DWORD *)v14 - 7) = (*((_DWORD *)p_Parent - 4) >> 8) & 1;
        v17 = *((_DWORD *)p_Parent - 4);
        *((_QWORD *)v14 - 2) = 0LL;
        *((_DWORD *)v14 - 6) = v17 >> 9;
        --v10;
      }
      while ( v10 );
    }
    *v12 = (*v12 - *(_QWORD *)(v11 + 16)) | 1;
    return 0LL;
  }
  return 3221225495LL;
}
