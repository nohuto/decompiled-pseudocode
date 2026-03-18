/*
 * XREFs of ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C0057FE0
 * Callers:
 *     _lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_::operator() @ 0x1C0167720 (_lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_--operator().c)
 *     _lambda_e7624565a55af25c5c5aa1d22c9a7051_::operator() @ 0x1C016798C (_lambda_e7624565a55af25c5c5aa1d22c9a7051_--operator().c)
 * Callees:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C0057368 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMapping(
        HOSTVMMONITORMAPPING *this,
        void *a2,
        struct _LUID a3,
        int a4,
        void *a5)
{
  _QWORD v6[4]; // [rsp+20h] [rbp-20h] BYREF
  void *v7; // [rsp+58h] [rbp+18h] BYREF
  struct _LUID v8; // [rsp+60h] [rbp+20h] BYREF
  int v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = &v7;
  v6[1] = &v8;
  v6[2] = &v9;
  v6[3] = &a5;
  return HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___(this, (__int64)v6);
}
