/*
 * XREFs of ?Update@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEAAXI_K0@Z @ 0x1800194EC
 * Callers:
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x180019450 (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::Update(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4)
{
  int v4; // eax
  int v5; // r9d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d

  v4 = 0;
  *((_QWORD *)this + 2) = a4;
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  v5 = 0;
  if ( a2 >= 0x100 )
  {
    if ( a2 <= 0x101 )
    {
      v5 = 6;
    }
    else if ( a2 > 0x200 && (a2 <= 0x202 || a2 == 522 || a2 == 526) )
    {
      v5 = 4;
    }
  }
  *((_DWORD *)this + 6) = v5;
  if ( v5 == 4 )
  {
    if ( a2 >= 0x201 )
    {
      if ( a2 > 0x202 )
      {
        if ( a2 == 522 )
        {
          v4 = 8;
        }
        else if ( a2 == 526 )
        {
          v4 = 9;
        }
      }
      else
      {
        v4 = 7;
      }
    }
  }
  else if ( v5 == 6 && a3 <= 0x28 )
  {
    v6 = a3 - 33;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  if ( v12 == 1 )
                    v4 = 11;
                }
                else
                {
                  v4 = 15;
                }
              }
              else
              {
                v4 = 10;
              }
            }
            else
            {
              v4 = 14;
            }
          }
          else
          {
            v4 = 16;
          }
        }
        else
        {
          v4 = 17;
        }
      }
      else
      {
        v4 = 13;
      }
    }
    else
    {
      v4 = 12;
    }
  }
  *((_DWORD *)this + 7) = v4;
}
