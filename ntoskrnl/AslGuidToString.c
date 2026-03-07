__int64 __fastcall AslGuidToString(wchar_t *a1, unsigned int a2, unsigned int *a3)
{
  NTSTATUS v3; // ebx
  int v5; // [rsp+20h] [rbp-68h]
  int v6; // [rsp+28h] [rbp-60h]
  int v7; // [rsp+30h] [rbp-58h]
  int v8; // [rsp+38h] [rbp-50h]
  int v9; // [rsp+40h] [rbp-48h]
  int v10; // [rsp+48h] [rbp-40h]
  int v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]

  v14 = *((unsigned __int8 *)a3 + 15);
  v13 = *((unsigned __int8 *)a3 + 14);
  v12 = *((unsigned __int8 *)a3 + 13);
  v11 = *((unsigned __int8 *)a3 + 12);
  v10 = *((unsigned __int8 *)a3 + 11);
  v9 = *((unsigned __int8 *)a3 + 10);
  v8 = *((unsigned __int8 *)a3 + 9);
  v7 = *((unsigned __int8 *)a3 + 8);
  v6 = *((unsigned __int16 *)a3 + 3);
  v5 = *((unsigned __int16 *)a3 + 2);
  v3 = RtlStringCchPrintfW(
         a1,
         a2,
         L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
         *a3,
         v5,
         v6,
         v7,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14);
  if ( v3 < 0 )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)v3;
}
