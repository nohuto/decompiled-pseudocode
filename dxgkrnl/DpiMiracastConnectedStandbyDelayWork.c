/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C039A200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01C5790 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdi
  struct _IO_WORKITEM *v4; // rbx
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v10 = 0;
  v9 = 0;
  v13 = 0;
  v14 = 0;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v11 = 73;
  v12 = 1;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v5, 0x200000000LL);
  v2 = qword_1C013B960;
  do
  {
    v3 = v2;
    v4 = (struct _IO_WORKITEM *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v2 = _InterlockedCompareExchange64(&qword_1C013B960, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem(v4);
    qword_1C013B960 = 0LL;
  }
}
