int __fastcall IVSerializeKeyboardInput(
        const struct _KEYBOARD_INPUT_DATA *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVGenericSerializer *a3)
{
  __int64 v3; // rbx
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)v3, a2, 0);
  if ( result >= 0 )
  {
    *(_WORD *)(v3 + 16) = a1->UnitId;
    *(_WORD *)(v3 + 20) = a1->MakeCode;
    *(_WORD *)(v3 + 24) = a1->Flags;
    *(_WORD *)(v3 + 28) = a1->Reserved;
    *(_DWORD *)(v3 + 32) = a1->ExtraInformation;
  }
  return result;
}
