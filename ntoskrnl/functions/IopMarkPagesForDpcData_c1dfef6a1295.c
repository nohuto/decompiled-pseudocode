__int64 __fastcall IopMarkPagesForDpcData(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 *v7; // r15
  __int64 result; // rax
  _QWORD *i; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  __int64 *v18; // r14
  unsigned int v19; // r12d
  __int64 j; // rdi
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx

  v1 = 0;
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v4 = KiProcessorBlock[v2];
      if ( v4 )
        break;
LABEL_36:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_37;
    }
    v5 = *(_QWORD *)(v4 + 34984);
    if ( v5 )
      MmAddRangeToCrashDump(a1, v5, *(unsigned int *)(v4 + 13276));
    v6 = 0;
    v7 = (__int64 *)(v4 + 13152);
    while ( 1 )
    {
      result = MmAddRangeToCrashDump(a1, v7 - 4, 48LL);
      v1 = result;
      if ( (int)result < 0 )
        break;
      if ( *v7 )
      {
        if ( MmIsAddressValidEx(*v7) )
        {
          result = MmAddRangeToCrashDump(a1, *v7, 64LL);
          v1 = result;
          if ( (int)result < 0 )
            break;
        }
      }
      for ( i = (_QWORD *)*(v7 - 4); i && MmIsAddressValidEx((__int64)i); i = (_QWORD *)*i )
      {
        result = MmAddRangeToCrashDump(a1, i - 1, 64LL);
        v1 = result;
        if ( (int)result < 0 )
          return result;
        v10 = i[6];
        if ( v10 != 1 )
        {
          result = MmAddRangeToCrashDump(a1, v10, 96LL);
          v1 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      ++v6;
      v7 += 6;
      if ( v6 >= 2 )
      {
        v11 = *(_QWORD *)(v4 + 13216);
        if ( !v11 || (result = MmAddRangeToCrashDump(a1, v11 - 24576, 24576LL), v1 = result, (int)result >= 0) )
        {
          v12 = *(_QWORD *)(v4 + 33384);
          if ( !v12 || (result = MmAddRangeToCrashDump(a1, v12 - 24576, 24576LL), v1 = result, (int)result >= 0) )
          {
            if ( (PartialDumpControl & 1) == 0 )
              goto LABEL_36;
            v13 = *(_QWORD *)(v4 + 35288);
            if ( !v13 || (result = MmAddRangeToCrashDump(a1, v13 - 24576, 24576LL), v1 = result, (int)result >= 0) )
            {
              v14 = *(_QWORD *)(v4 - 376);
              if ( !v14 )
                goto LABEL_36;
              result = MmAddRangeToCrashDump(a1, v14, 104LL);
              v1 = result;
              if ( (int)result >= 0 )
              {
                v15 = 1;
                while ( 1 )
                {
                  v16 = *(_QWORD *)(*(_QWORD *)(v4 - 376) + 8LL * v15 + 28);
                  if ( v16 )
                  {
                    if ( KiKvaShadow )
                    {
                      v17 = (_QWORD *)(v16 + 8);
                      if ( *(_QWORD *)(v16 + 8) )
                      {
                        result = MmAddRangeToCrashDump(a1, v16, 48LL);
                        if ( (int)result < 0 )
                          return result;
                        result = MmAddRangeToCrashDump(a1, *v17, 32LL);
                        if ( (int)result < 0 )
                          return result;
                        v16 = *v17 + 32LL;
                      }
                    }
                    result = MmAddRangeToCrashDump(a1, v16 - 24576, 24576LL);
                    v1 = result;
                    if ( (int)result < 0 )
                      return result;
                  }
                  if ( ++v15 > 4 )
                    goto LABEL_36;
                }
              }
            }
          }
        }
        return result;
      }
    }
  }
  else
  {
LABEL_37:
    if ( !KiIntTrackRootCount || (PartialDumpControl & 1) == 0 )
      return v1;
    v18 = (__int64 *)KiIntTrackRootList;
    v19 = 0;
LABEL_63:
    if ( v18 != &KiIntTrackRootList && MmIsAddressValidEx((__int64)v18) && (++v19, v19 <= KiIntTrackRootCount) )
    {
      result = MmAddRangeToCrashDump(a1, v18, 224LL);
      v1 = result;
      if ( (int)result >= 0 )
      {
        for ( j = v18[2]; ; j = *(_QWORD *)j )
        {
          if ( (__int64 *)j == v18 + 2 || !MmIsAddressValidEx(j) )
          {
            v18 = (__int64 *)*v18;
            goto LABEL_63;
          }
          if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j || **(_QWORD **)(j + 8) != j )
            return v1;
          result = MmAddRangeToCrashDump(a1, j, 152LL);
          if ( (int)result < 0 )
            return result;
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(j + 32), 8LL * *(unsigned int *)(j + 24));
          v1 = result;
          if ( (int)result < 0 )
            return result;
          v21 = 0LL;
          if ( *(_DWORD *)(j + 24) )
            break;
LABEL_60:
          ;
        }
        while ( 1 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21), 288LL);
          v1 = result;
          if ( (int)result < 0 )
            break;
          v22 = *(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21);
          if ( v22 && MmIsAddressValidEx(v22) )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 24LL);
            if ( v23 )
            {
              result = MmAddRangeToCrashDump(a1, v23, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 32LL);
            if ( v24 )
            {
              result = MmAddRangeToCrashDump(a1, v24, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 32) + 8 * v21) + 48LL);
            if ( v25 )
            {
              result = MmAddRangeToCrashDump(a1, v25, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                break;
            }
          }
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= *(_DWORD *)(j + 24) )
            goto LABEL_60;
        }
      }
    }
    else
    {
      return v1;
    }
  }
  return result;
}
