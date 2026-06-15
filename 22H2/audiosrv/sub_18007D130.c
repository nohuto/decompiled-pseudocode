/*
 * XREFs of sub_18007D130 @ 0x18007D130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_18007D130()
{
  int *v0; // rax
  REGHANDLE v1; // rcx

  v0 = off_18019C3D8[0];
  v1 = *((_QWORD *)off_18019C3D8[0] + 4);
  *((_QWORD *)off_18019C3D8[0] + 4) = 0LL;
  *v0 = 0;
  EventUnregister(v1);
}
