void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rdi
  struct _VIDMM_LOCAL_ALLOC *v4; // r14
  __int64 v5; // r8
  _BYTE *v6; // rsi
  int v7; // edx
  char v8; // al
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rcx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 68LL);
  v6 = (_BYTE *)(*(_QWORD *)a1 + 72LL);
  if ( (v5 & 0x100) == 0 || (*(_DWORD *)v6 & 0x80u) == 0 )
  {
    v7 = **(_DWORD **)(v2 + 536);
    if ( (v7 & 8) == 0 && (v7 & 0x20000) == 0 )
    {
      if ( (*(_BYTE *)(v2 + 76) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 68LL) & 0x100) == 0 )
      {
        LOBYTE(a1) = (v7 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & (*v6 >= 0)) != 0 )
        {
          if ( (v7 & 0x20000000) != 0 )
          {
            v8 = *((_BYTE *)v4 + 32);
            if ( (v8 & 8) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)v4 + 32) = v8 & 0xF7;
            }
            else
            {
              CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
            }
            VidMmUnmapViewAsync(CurrentProcess, *(void **)(v2 + 384), a2);
          }
          else
          {
            v13 = -1;
            v14 = 0LL;
            if ( (qword_1C0076010 & 2) != 0 )
            {
              v15 = 1;
              v13 = 8003;
              if ( byte_1C00769C1 < 0 )
                McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, v5, 8003);
            }
            else
            {
              v15 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry();
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL),
              *((_QWORD *)v4 + 3));
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
            if ( v15 && byte_1C00769C1 < 0 )
              McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
          }
        }
      }
      else
      {
        v12 = *(void **)(v2 + 392);
        if ( v12 )
        {
          MmUnmapViewInSystemSpace(v12);
          *(_DWORD *)v6 &= ~0x1000000u;
          *(_QWORD *)(v2 + 392) = 0LL;
        }
      }
    }
  }
}
