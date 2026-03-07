void __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_KEYBOARD_DEVICE_INFO *a2,
        const struct tagKEYBOARD_DEVICE_INFO *a3)
{
  *(_BYTE *)a2 = *(_BYTE *)a3;
  *((_BYTE *)a2 + 4) = *((_BYTE *)a3 + 1);
  *((_WORD *)a2 + 4) = *((_WORD *)a3 + 1);
  *((_WORD *)a2 + 6) = *((_WORD *)a3 + 2);
  *((_WORD *)a2 + 8) = *((_WORD *)a3 + 3);
  *((_WORD *)a2 + 10) = *((_WORD *)a3 + 4);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a3 + 3);
  *((_WORD *)a2 + 14) = *((_WORD *)a3 + 8);
  *((_WORD *)a2 + 16) = *((_WORD *)a3 + 9);
  *((_WORD *)a2 + 18) = *((_WORD *)a3 + 10);
  *((_WORD *)a2 + 20) = *((_WORD *)a3 + 11);
  *((_WORD *)a2 + 22) = *((_WORD *)a3 + 12);
  *((_WORD *)a2 + 24) = *((_WORD *)a3 + 13);
  *((_DWORD *)a2 + 13) = *((_DWORD *)a3 + 7);
  *((_DWORD *)a2 + 14) = *((_DWORD *)a3 + 8);
  *((_DWORD *)a2 + 15) = -(*((_DWORD *)a3 + 9) & 1);
}
