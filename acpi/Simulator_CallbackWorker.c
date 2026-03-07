void __fastcall Simulator_CallbackWorker(PVOID CallbackContext, _DWORD *Argument1, PVOID Argument2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int SiblingNode; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax

  if ( Argument1 && *Argument1 == 2 )
  {
    v4 = Argument1[1];
    if ( v4 > 12 )
    {
      v10 = v4 - 13;
      if ( !v10 )
      {
        FreeDataBuffs(*((_QWORD *)Argument1 + 3), (unsigned int)Argument1[4]);
        goto LABEL_26;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v13 = gpnsNameSpaceRoot;
        Argument1[18] = 0;
        *((_QWORD *)Argument1 + 3) = v13;
        return;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_21;
        SiblingNode = Simulator_GetSiblingNode(Argument1, Argument1, Argument2);
      }
      else
      {
        SiblingNode = Simulator_GetChildNode(Argument1, Argument1, Argument2);
      }
    }
    else if ( v4 == 12 )
    {
      SiblingNode = Simulator_EvaluateNode(Argument1, Argument1, Argument2);
    }
    else
    {
      v5 = v4 - 7;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = (unsigned int)(v7 - 1);
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                AMLIResumeInterpreter();
LABEL_26:
                Argument1[18] = 0;
                return;
              }
LABEL_21:
              Argument1[18] = -1073741811;
              return;
            }
            SiblingNode = Simulator_PauseInterpreter(v8, Argument1, Argument2);
          }
          else
          {
            SiblingNode = Simulator_NotifyNode(Argument1, Argument1, Argument2);
          }
        }
        else
        {
          SiblingNode = Simulator_DuplicateObjData(Argument1, Argument1, Argument2);
        }
      }
      else
      {
        SiblingNode = Simulator_RemoveNode(Argument1, Argument1, Argument2);
      }
    }
    Argument1[18] = SiblingNode;
  }
}
