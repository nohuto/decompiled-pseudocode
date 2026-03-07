__int64 __fastcall DXGVAILOBJECT::Create(struct DXGVAILOBJECT **a1)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v3; // r9
  void *v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edx
  char v8; // r8
  int v9; // eax
  _DWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  void *v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  void *v19; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v19 = 0LL;
  Handle = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0xC0060000, (struct _ACL **)&v19);
  v4 = v19;
  v5 = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor < 0 )
    goto LABEL_4;
  v11[1] = 0;
  v15 = 0;
  v12 = 0LL;
  v14 = 0;
  v13 = 0LL;
  v17 = 0LL;
  v11[0] = 48;
  v16 = v19;
  v6 = DxgkCompositionObject::Create(
         0LL,
         (__int64)v11,
         0xC0060000,
         v3,
         3,
         144,
         (__int64 (__fastcall *)(PVOID, __int64, char *))DXGVAILOBJECT::ObjectInit,
         0LL,
         &Handle);
  v5 = v6;
  if ( v6 < 0 || (v9 = DXGVAILOBJECT::ResolveHandle(Handle, v7, v8, a1), v5 = v9, v9 < 0) )
LABEL_4:
    WdLogSingleEntry1(3LL, v5);
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v4 )
    operator delete(v4);
  return (unsigned int)v5;
}
