/*
 * XREFs of WheapWmiGetAllData @ 0x140611FFC
 * Callers:
 *     WheaWmiDispatch @ 0x1403AA290 (WheaWmiDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapWmiGetAllData(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rax

  v4 = 72;
  if ( a2 >= 0x48 )
  {
    *(_DWORD *)a3 = 72;
    v6 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a3 + 44) |= 0x10u;
    *(_QWORD *)(a3 + 16) = v6;
    *(_DWORD *)(a3 + 52) = 1;
    *(_DWORD *)(a3 + 60) = 0;
    *(_DWORD *)(a3 + 48) = 72;
  }
  else
  {
    if ( a2 < 0x38 )
    {
      result = 3221225507LL;
      goto LABEL_7;
    }
    *(_DWORD *)(a3 + 48) = 72;
    v4 = 56;
    *(_DWORD *)(a3 + 44) = 32;
  }
  result = 0LL;
LABEL_7:
  if ( (int)result < 0 )
    v4 = 0;
  *a4 = v4;
  return result;
}
