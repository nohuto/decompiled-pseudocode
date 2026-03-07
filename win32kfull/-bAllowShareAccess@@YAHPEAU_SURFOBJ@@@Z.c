_BOOL8 __fastcall bAllowShareAccess(struct _SURFOBJ *a1)
{
  HDEV hdev; // [rsp+30h] [rbp+8h] BYREF

  hdev = a1->hdev;
  return PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev) != 0;
}
