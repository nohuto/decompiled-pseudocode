/*
 * XREFs of sub_14096319C @ 0x14096319C
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14096319C(__int64 a1, int *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  _DWORD *PoolWithTag; // rax

  if ( a2 )
  {
    v4 = *((_QWORD *)a2 + 1);
    if ( v4 )
    {
      v8 = *a2;
      v9 = 0;
      v10 = (_DWORD *)*((_QWORD *)a2 + 1);
      if ( v8 )
      {
        while ( 1 )
        {
          v11 = *v10 + 4;
          if ( *v10 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v10 + v11) < v10 )
            return (unsigned int)-1073741675;
          ++v9;
          v10 = (_DWORD *)((char *)v10 + v11);
          if ( v9 >= v8 )
            goto LABEL_12;
        }
        v3 = -1073741675;
      }
      else
      {
LABEL_12:
        if ( v10 + 1 < v10 )
          return (unsigned int)-1073741675;
        v3 = 0;
        if ( (unsigned __int64)(v10 + 2) > v4 + (unsigned __int64)(unsigned int)a2[1] )
          return (unsigned int)-1073741789;
        *v10 = 4;
        v10[1] = -2147467263;
        ++*a2;
      }
    }
    else
    {
      v5 = a2[1];
      v6 = -1;
      v7 = v5 + 8;
      if ( v5 + 8 >= v5 )
        v6 = v5 + 8;
      v3 = v7 < v5 ? 0xC0000095 : 0;
      a2[1] = v6;
      if ( v7 >= v5 )
      {
        ++*a2;
        goto LABEL_18;
      }
    }
    if ( (v3 & 0x80000000) != 0 )
      return v3;
LABEL_18:
    if ( !a2[1] )
      return (unsigned int)-1073741762;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)a2[1], 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *((_QWORD *)a2 + 1) = PoolWithTag;
    *a2 = 0;
    if ( PoolWithTag + 1 >= PoolWithTag )
    {
      v3 = 0;
      if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + (unsigned int)a2[1]) )
      {
        *PoolWithTag = 4;
        PoolWithTag[1] = -2147467263;
        ++*a2;
        return v3;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741811;
}
