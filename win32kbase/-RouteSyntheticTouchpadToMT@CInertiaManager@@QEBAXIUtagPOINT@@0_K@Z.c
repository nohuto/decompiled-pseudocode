void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v14[34]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+130h] [rbp+30h] BYREF
  __int64 v16; // [rsp+140h] [rbp+40h]
  _BYTE v17[112]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp+B8h]
  _QWORD v19[26]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v20[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v21; // [rsp+300h] [rbp+200h]
  __int64 v22; // [rsp+308h] [rbp+208h]

  memset(v14, 0, 0x108uLL);
  v16 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  v22 = 0LL;
  v12 = SGDGetUserSessionState(v9, v8, v10, v11);
  LODWORD(v14[6]) = 1;
  v13 = *(_QWORD *)(v12 + 3424);
  DWORD1(v15) |= 0x180u;
  v14[30] = &v15;
  v14[0] = v13;
  LODWORD(v19[3]) = 5;
  LODWORD(v15) = v15 & 0xFFFFF3FF | 0x400;
  HIDWORD(v19[25]) = a5;
  HIDWORD(v19[4]) = 0x800000;
  v19[9] = a3;
  v19[7] = a3;
  v19[10] = a4;
  v19[8] = a4;
  LODWORD(v19[12]) = a2;
  CTouchProcessor::ForwardInertiaFrameToManipulationThread((const struct CPointerInputFrame *)v14);
  CInputDest::SetEmpty((CInputDest *)v20);
  CInputDest::SetEmpty((CInputDest *)v17);
}
