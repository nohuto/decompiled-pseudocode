/*
 * XREFs of sub_1800CECB0 @ 0x1800CECB0
 * Callers:
 *     sub_1800CEAE4 @ 0x1800CEAE4 (sub_1800CEAE4.c)
 *     sub_1800CEBD8 @ 0x1800CEBD8 (sub_1800CEBD8.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CECB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdx

  result = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 88);
    if ( !v3 )
    {
      v4 = (unsigned int)(*(_DWORD *)(a2 + 96) % *(_DWORD *)(a1 + 16) + 1);
      do
      {
        if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
          break;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) )
          v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( !v3 );
    }
    return v3;
  }
  return result;
}
