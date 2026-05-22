/*
 * XREFs of ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007DE70
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EE90 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _lambda_6021ab717573615d0d25c7335f38cd2c_::operator() @ 0x180041028 (_lambda_6021ab717573615d0d25c7335f38cd2c_--operator().c)
 *     _lambda_31831d19834a95ec93618be6274e412d_::operator() @ 0x18007D6E0 (_lambda_31831d19834a95ec93618be6274e412d_--operator().c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180085340 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

char __fastcall MPCHandProcessor::HandleHomeGesture(MPCHandProcessor *this, struct InputInfo *a2)
{
  struct InputInfo *v3; // r8
  int v4; // ecx
  int v5; // ecx
  char v7; // al
  char v8; // dl
  bool v9; // al
  __int64 v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  struct InputInfo *v12; // [rsp+50h] [rbp+10h] BYREF

  v11[0] = this;
  v10[0] = (__int64)this;
  v12 = a2;
  v3 = a2;
  v4 = *(_DWORD *)a2;
  v11[1] = &v12;
  v10[1] = (__int64)&v12;
  v5 = v4 & 0x662600;
  if ( v5 && *((_DWORD *)a2 + 16) == 9 )
  {
    lambda_6021ab717573615d0d25c7335f38cd2c_::operator()(v11, 4u);
    if ( *((_BYTE *)this + 10760) )
    {
      *((_BYTE *)this + 10760) = 0;
      lambda_31831d19834a95ec93618be6274e412d_::operator()(v10);
    }
    return 1;
  }
  v7 = v5 && *((_DWORD *)a2 + 16) == 11;
  v8 = *((_BYTE *)this + 10760);
  if ( v8 != v7 || v8 && *((_DWORD *)this + 2691) != *((_DWORD *)v3 + 214) )
  {
    v9 = v5 && *((_DWORD *)v3 + 16) == 11;
    *((_BYTE *)this + 10760) = v9;
    *((_DWORD *)this + 2691) = *((_DWORD *)v3 + 214);
    lambda_31831d19834a95ec93618be6274e412d_::operator()(v10);
    v3 = v12;
  }
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 582),
    *((_DWORD *)v3 + 245) == 16,
    *((_QWORD *)v3 + 2));
  if ( *((_BYTE *)this + 10768) && *(_BYTE *)(*((_QWORD *)this + 582) + 10LL) )
  {
    lambda_6021ab717573615d0d25c7335f38cd2c_::operator()(v11, 8u);
    return 1;
  }
  return 0;
}
