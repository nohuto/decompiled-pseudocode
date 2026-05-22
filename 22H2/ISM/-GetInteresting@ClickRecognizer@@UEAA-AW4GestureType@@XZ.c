/*
 * XREFs of ?GetInteresting@ClickRecognizer@@UEAA?AW4GestureType@@XZ @ 0x180184780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ClickRecognizer::GetInteresting(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  int v3; // ecx
  int result; // eax

  v1 = *(unsigned __int16 *)(a1 + 16);
  v2 = (v1 >> 2) & 2 | 1;
  if ( (v1 & 4) == 0 )
    v2 = (v1 >> 2) & 2;
  if ( (v1 & 0x10) != 0 || (v1 & 0x20) != 0 )
    v2 |= 4u;
  v3 = v2 | 8;
  if ( (v1 & 0x40) == 0 )
    v3 = v2;
  result = v3 | 0x200;
  if ( (v1 & 0x100) == 0 )
    return v3;
  return result;
}
