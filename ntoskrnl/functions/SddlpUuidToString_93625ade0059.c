wchar_t *__fastcall SddlpUuidToString(unsigned int *a1, _QWORD *a2)
{
  wchar_t *result; // rax
  int v5; // [rsp+20h] [rbp-58h]
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h]
  int v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+68h] [rbp-10h]

  result = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4AuLL, 0x64536553u);
  *a2 = result;
  if ( result )
  {
    v14 = *((unsigned __int8 *)a1 + 15);
    v13 = *((unsigned __int8 *)a1 + 14);
    v12 = *((unsigned __int8 *)a1 + 13);
    v11 = *((unsigned __int8 *)a1 + 12);
    v10 = *((unsigned __int8 *)a1 + 11);
    v9 = *((unsigned __int8 *)a1 + 10);
    v8 = *((unsigned __int8 *)a1 + 9);
    v7 = *((unsigned __int8 *)a1 + 8);
    v6 = *((unsigned __int16 *)a1 + 3);
    v5 = *((unsigned __int16 *)a1 + 2);
    swprintf_s(
      result,
      0x25uLL,
      L"%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
      *a1,
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
    return (wchar_t *)1;
  }
  return result;
}
