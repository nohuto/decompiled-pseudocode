/*
 * XREFs of ?DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z @ 0x1C0156DF0
 * Callers:
 *     <none>
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___ @ 0x1C01566C8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___.c)
 */

__int64 __fastcall DispBrokerAsyncRefreshOrientation(__int64 a1, int a2)
{
  int *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v4 = a1;
  v3[0] = &v4;
  v3[1] = &v5;
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___(a1, v3);
}
