/*
 * XREFs of sub_1800E21F0 @ 0x1800E21F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800E1F38 @ 0x1800E1F38 (sub_1800E1F38.c)
 *     sub_18012D5F0 @ 0x18012D5F0 (sub_18012D5F0.c)
 */

__int64 __fastcall sub_1800E21F0(RPC_BINDING_HANDLE BindingHandle, __int64 a2, HANDLE *a3)
{
  __int64 v4; // rdi
  char *v5; // rsi
  __int64 *v8; // rax
  __int64 v9; // r8
  signed int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  char *v14; // r14
  HRESULT v15; // eax
  RPC_STATUS v16; // eax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  char *v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FilterHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  void *ConnectionHandle; // [rsp+58h] [rbp-A8h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+ACh] [rbp-54h]
  int v29; // [rsp+B4h] [rbp-4Ch]
  __int128 v30; // [rsp+B8h] [rbp-48h]
  __int128 v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D8h] [rbp-28h]
  struct _TP_TIMER *pv[8]; // [rsp+F0h] [rbp-10h] BYREF
  ULONG v34; // [rsp+170h] [rbp+70h] BYREF
  unsigned int Pid; // [rsp+178h] [rbp+78h] BYREF

  v4 = -1LL;
  v5 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  v22 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v8 = sub_180008448((__int64)BindingHandle, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"s_midiOpenPort");
  if ( a3 )
  {
    v11 = sub_1800E1F38(a2, &v22, &v34);
    v5 = v22;
    v10 = v11;
    if ( v11 >= 0 )
    {
      v13 = sub_18012D5F0(v22, v12, &FilterHandle);
      v14 = (char *)FilterHandle;
      v10 = v13;
      if ( v13 >= 0 )
      {
        Connect.PinToHandle = 0LL;
        *(&Connect.Interface.Alignment + 2) = 0LL;
        *(&Connect.Medium.Alignment + 2) = 0LL;
        *(&Connect.PinId + 1) = 0;
        Connect.Interface.Set = (GUID)xmmword_1801714B8;
        v28 = 0LL;
        v29 = 0;
        Connect.Medium.Set = (GUID)xmmword_1801714A8;
        Connect.PinId = v34;
        Connect.Priority.PriorityClass = 0x40000000;
        Connect.Priority.PrioritySubClass = 0x40000000;
        v30 = xmmword_180171498;
        v27 = 64;
        v31 = xmmword_180171488;
        v32 = xmmword_180171478;
        v15 = KsCreatePin2(FilterHandle, &Connect, 0xC0000000, &ConnectionHandle);
        v10 = v15;
        if ( v15 > 0 )
          v10 = (unsigned __int16)v15 | 0x80070000;
        if ( v10 >= 0 )
        {
          v16 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v16 )
          {
            if ( v16 > 0 )
              v10 = (unsigned __int16)v16 | 0x80070000;
            else
              v10 = v16;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v4 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v4
              && (CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, ConnectionHandle, (HANDLE)v4, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v10 = LastError;
              if ( LastError > 0 )
                v10 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v14);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v4);
    }
  }
  else
  {
    v10 = -2147467261;
  }
  CoTaskMemFree(v5);
  if ( v10 < 0 )
    sub_18005E8F8((__int64)"s_midiOpenPort", 216, v10);
  sub_18000F690((__int64)pv, v19, v20);
  return (unsigned int)v10;
}
