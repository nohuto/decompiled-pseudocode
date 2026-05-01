/*
 * XREFs of _dynamic_initializer_for__BlockResponding__ @ 0x180004A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18008EE4C (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

int dynamic_initializer_for__BlockResponding__()
{
  _QWORD v1[2]; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v2[5]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+44h] [rbp-15h]
  int v4; // [rsp+4Ch] [rbp-Dh]
  int v5; // [rsp+50h] [rbp-9h]
  int v6; // [rsp+54h] [rbp-5h]
  int v7; // [rsp+58h] [rbp-1h]
  int v8; // [rsp+5Ch] [rbp+3h]
  int v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+64h] [rbp+Bh]
  int v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+6Ch] [rbp+13h]
  int v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+74h] [rbp+1Bh]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  int v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+84h] [rbp+2Bh]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  int v21; // [rsp+90h] [rbp+37h]
  char v22; // [rsp+94h] [rbp+3Bh] BYREF

  v2[0] = -124757505;
  v1[0] = v2;
  v2[1] = -89489409;
  v1[1] = &v22;
  v2[2] = -54286593;
  v2[3] = -35993345;
  v2[4] = -17898241;
  v3 = -329473LL;
  v4 = -197889;
  v5 = -856833;
  v6 = -35268609;
  v7 = -36520449;
  v8 = -71327745;
  v9 = -89489153;
  v10 = -124493825;
  v11 = -142523649;
  v12 = -160552705;
  v13 = -161410049;
  v14 = -178846209;
  v15 = -179044097;
  v16 = -179044097;
  v17 = -179044097;
  v18 = -179044097;
  v19 = -178714625;
  v20 = -161080321;
  v21 = -126273537;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(&BlockResponding, v1);
  return atexit(dynamic_atexit_destructor_for__BlockResponding__);
}
