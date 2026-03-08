/*
 * XREFs of ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1C02EA0F4
 * Callers:
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C029AF50 (FONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::chglyGetAllHandles(RFONTOBJ *this, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r9
  unsigned int i; // r11d
  unsigned __int16 *v8; // r10
  unsigned __int16 v9; // ax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  if ( *(_DWORD *)(v4 + 4) > 8u && (result = *(unsigned int *)(v4 + 200), (_DWORD)result) )
  {
    if ( a2 )
    {
      do
        *a2++ = v3++;
      while ( v3 < (unsigned int)result );
    }
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 472);
    if ( a2 )
    {
      for ( i = 0; i < *(_DWORD *)(v6 + 12); ++i )
      {
        v8 = (unsigned __int16 *)(v6 + 16 * (i + 1LL));
        v9 = v8[1];
        if ( *((_QWORD *)v8 + 1) )
        {
          v10 = 0;
          if ( v9 )
          {
            do
            {
              v11 = v10++;
              *a2++ = *(_DWORD *)(*((_QWORD *)v8 + 1) + 4 * v11);
            }
            while ( v10 < v8[1] );
          }
        }
        else
        {
          v12 = 0;
          if ( v9 )
          {
            do
            {
              v13 = v12 + *v8;
              ++v12;
              *a2++ = v13;
            }
            while ( v12 < v8[1] );
          }
        }
      }
    }
    return *(unsigned int *)(v6 + 8);
  }
  return result;
}
