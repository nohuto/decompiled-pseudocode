/*
 * XREFs of xxxSimulateShiftF10 @ 0x1C01C9EA0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

__int64 xxxSimulateShiftF10()
{
  char v1; // [rsp+30h] [rbp-18h]
  int v2; // [rsp+30h] [rbp-18h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-18h]
  char v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+38h] [rbp-10h]

  v5 = 0;
  v1 = 0;
  xxxKeyEvent(
    160LL,
    554LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    v1,
    v5);
  LOBYTE(v6) = 0;
  LOBYTE(v2) = 0;
  xxxKeyEvent(
    121LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    v2,
    v6);
  LOBYTE(v7) = 0;
  LOBYTE(v3) = 0;
  xxxKeyEvent(
    32889LL,
    580LL,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    v3,
    v7);
  LOBYTE(v8) = 0;
  LOBYTE(v4) = 0;
  return xxxKeyEvent(
           32928LL,
           554LL,
           (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
           0LL,
           0LL,
           0LL,
           v4,
           v8);
}
