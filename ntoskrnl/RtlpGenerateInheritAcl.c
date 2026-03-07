__int64 __fastcall RtlpGenerateInheritAcl(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        __int64 a14,
        _BYTE *a15)
{
  int v15; // ebp
  __int64 v16; // rbx
  unsigned int v17; // edi
  unsigned int v19; // esi
  __int64 v20; // r12
  int v21; // r14d
  int v22; // r13d
  __int64 result; // rax
  char v24; // [rsp+70h] [rbp-58h]
  unsigned int v25; // [rsp+74h] [rbp-54h] BYREF
  _DWORD v26[20]; // [rsp+78h] [rbp-50h] BYREF
  char v27; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int8 v28; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v29; // [rsp+E0h] [rbp+18h]
  __int64 v30; // [rsp+E8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v15 = 0;
  v16 = a1 + 8;
  v17 = 0;
  v25 = 0;
  v26[0] = 0;
  v19 = 0;
  v27 = 0;
  v24 = 0;
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v20 = a14;
    v21 = a11;
    v22 = a10;
    while ( 1 )
    {
      if ( *(_BYTE *)v16 == 17 )
      {
        if ( v21 == 3 )
        {
          if ( RtlFindAceByType(v20, 17, 0LL) )
          {
LABEL_13:
            if ( !v24 )
              break;
LABEL_21:
            result = 3221225507LL;
            *a13 = v17 + v15;
            return result;
          }
LABEL_5:
          result = RtlpGenerateInheritedAce(
                     v16,
                     v28,
                     v29,
                     v30,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     v22,
                     (__int64)&v25,
                     v20,
                     (__int64)v26,
                     (__int64)&v27);
          if ( (_DWORD)result == -1073741789 )
          {
            v24 = 1;
          }
          else if ( (int)result < 0 )
          {
            return result;
          }
          if ( v27 )
            *a15 = 1;
          v15 += v25;
          if ( v25 > v17 || (v17 -= v25, v17 <= v26[0]) )
            v17 = v26[0];
        }
      }
      else if ( v21 != 3 )
      {
        goto LABEL_5;
      }
      ++v19;
      v16 += *(unsigned __int16 *)(v16 + 2);
      if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v15;
  return 0LL;
}
