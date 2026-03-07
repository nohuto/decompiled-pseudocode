BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  ULONG_PTR v9; // rsi
  unsigned int v10; // edi
  unsigned int v11; // edi
  char v12; // r15
  struct HOBJ__ *inserted; // rax
  ULONG_PTR v14; // rdi
  __int64 ObjectAttr; // r12
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // r15
  __int64 ProcessWow64Process; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v24; // edi
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edi
  __int64 v28; // [rsp+38h] [rbp-70h] BYREF
  int v29; // [rsp+40h] [rbp-68h]
  struct BRUSH *v30; // [rsp+50h] [rbp-58h]
  ULONG_PTR v31; // [rsp+58h] [rbp-50h]
  __int64 v32; // [rsp+60h] [rbp-48h]
  __int64 *v33; // [rsp+68h] [rbp-40h]
  struct HOBJ__ *v34; // [rsp+70h] [rbp-38h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 > 0xC )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = (ULONG_PTR)v8;
    v30 = v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 19) = a2;
      *((_DWORD *)v8 + 20) = a3;
      *((_QWORD *)v8 + 3) = 0LL;
      v33 = (__int64 *)((char *)v8 + 48);
      **((_DWORD **)v8 + 6) = 0;
      if ( a3 < 6 )
      {
        *((_DWORD *)v8 + 10) = 32802;
      }
      else
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v24 = v11 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 - 1;
                  if ( v27 )
                  {
                    if ( v27 == 1 )
                      *((_DWORD *)v8 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v8 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v8 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v8 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v8 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v8 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v8 + 10) = 16;
        }
      }
      v12 = 0;
      inserted = HmgInsertObjectInternal(v8, 3u, 0x10u);
      v34 = inserted;
      v14 = 0LL;
      if ( inserted )
        v14 = v9;
      v31 = v14;
      if ( inserted )
      {
        if ( a5 )
        {
          ObjectAttr = HmgAllocateObjectAttr();
          v32 = ObjectAttr;
          if ( ObjectAttr )
          {
            v28 = 0LL;
            v29 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v28, *(struct HOBJ__ **)v9, 0x10u);
            if ( v29 )
            {
              *(_QWORD *)ObjectAttr = *(_QWORD *)(v9 + 72);
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
              v18 = CurrentProcessWin32Process;
              if ( CurrentProcessWin32Process )
                v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
              if ( !v18 )
                KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
              ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v18);
              v20 = *(unsigned int *)(v18 + 292);
              v21 = *(_DWORD *)(v18 + 292);
              if ( ProcessWow64Process )
                v22 = (unsigned int)__ROR4__(ObjectAttr ^ v20, v21 & 0x1F);
              else
                v22 = __ROR8__(ObjectAttr ^ v20, v21 & 0x3F);
              *(_QWORD *)(v28 + 16) = v22;
              *v33 = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
              v12 = 0;
              if ( v29 )
                HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
            }
          }
        }
      }
      else
      {
        v12 = 1;
        *(_QWORD *)this = 0LL;
      }
      if ( v14 )
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
      if ( v12 )
        FreeBrushMemory(v9);
    }
  }
  return this;
}
